function [] = interpolateMain(nX, betaV)
global nCenterX nCenterY beta;
nCenterX = nX;
nCenterY = nCenterX;
global xMax yMax;
xMax = 10;
yMax = 10;
beta = betaV;

G = RBFMatrix ();

% Creo La Q campionando la funzione x^+y^2 per ogni x e y tra 0 e nCenter
Q = zeros(nCenterX,nCenterY);
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
       [center] = index2state(i1, i2);
       Q(i1,i2) = center(1)^2+center(2)^2;
    end
end


[w] = interpolate (G,Q);



clf

step = 0.1;

x = [0:step:xMax];
y = [0:step:yMax];

[X,Y] = meshgrid(x, y);

RBFint = zeros(length(x), length(y));

% Calcolo i valori interpolati
for i = 1 : length(x)
    for j= 1 : length(y)
        [rho] = NodeValue(scalar2vect(x(i),y(j)));
        RBFint(i, j) = w'*rho;
    end
end

% Calcolo la parabola punto per punto
Z = X.^2 + Y.^2;



surf(X,Y,RBFint);
hold on
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
       [center] = index2state(i1, i2);
       scatter3(center(1),center(2),Q(i1,i2));
    end
end
surf(X,Y,Z);

% legend("RBF","Parabola");

test = w'* NodeValue(index2state(1, 1));
fprintf("netTest in (1,1) = %.6f; true val = %.6f\n", test, Q(1,1));

end


function [G] = RBFMatrix ()
global nCenterX nCenterY beta;
G = eye(nCenterX * nCenterX);
i = 1;
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
        [C1] = index2state(i1, i2);
        j = i;
        % In teoria G è simmetrica, e la diagonale è tutta di 1
        for j1 = i1 : nCenterX
            for j2 = i2 : nCenterY
                [C2] = index2state(j1, j2);
                G(i,j) = exp(-beta*sum((C1-C2).^2));
                G(j,i) = G(i,j);
                j = j+1;
            end
        end
    end
    i = i+1;
end
% G = gpuArray(G);

end

function [w] = interpolate (G,Q)

% b = gpuArray( Bvector(Q) );
b = Bvector(Q);
w = G \ b ;
end


% points (Xi,Yi) = [f(x,y)]
function [B] = Bvector (points)
global nCenterX nCenterY;

B = zeros(nCenterX * nCenterY,1);
i=1;
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
        B(i) = points(i1, i2);
        i=i+1;
    end
end
end

function  [rho] = NodeValue (state)
global nCenterX nCenterY beta;

rho = zeros(nCenterX * nCenterY, 1);
i=1;
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
        [C1] = index2state(i1, i2);
        rho(i) = exp(-beta*sum((C1-state).^2));
        i=i+1;
        
    end
end
% rho = gpuArray( rho );

end



function [state] = scalar2vect(X,Y)
state = [X,Y];
end

% Dati gli stati ottiene gli indici che li contengono
function [i1, i2] = state2index(X,Y)
global xMax yMax;
global nCenterX nCenterY;
% VxBall
% VyBall
i1 = min(max(1,ceil(X/xMax * nCenterX)),nCenterX);
i2 = min(max(1,ceil(Y/yMax * nCenterY)),nCenterY);
end

% Dati gli indici ritorna le coordinate dello stato
function [center] = index2state(i1, i2)
global xMax yMax;
global nCenterX nCenterY;

center = [
    i1/nCenterX * xMax, ...  %Xi center
    i2/nCenterY * yMax, ...  %Yi center
    ];
end