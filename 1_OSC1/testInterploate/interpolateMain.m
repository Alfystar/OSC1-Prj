function [tG, tW, tRBFint, tplot] = interpolateMain(nX, betaV, Gstep,speed)
global nCenterX nCenterY beta;
nCenterX = nX;
nCenterY = nCenterX;
global xMax xmin yMax ymin;
xMax = 10;
xmin = -10;

yMax = 10;
ymin = -10;
beta = betaV;

fprintf("Inizio Calcolo della G,b,w\n")
tic;
G = RBFMatrix ();
tG = toc;


% Creo La Q campionando la funzione x^+y^2 per ogni x e y tra 0 e nCenter
Q = zeros(nCenterX,nCenterY);
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
       [center] = index2state(i1, i2);
       Q(i1,i2) = f(center(1),center(2));
    end
end

global w;
tic
[w] = interpolate (G,Q);
if(speed == 2)
    [~,I] = sort(w);
    for i = 1:floor(length(w)*0.5)
        w(I(i)) = 0;
    end
end

tW = toc;
fprintf("\tFine Calcolo della G,b,w\n")

clf

step = Gstep;

x = [xmin:step:xMax];
y = [ymin:step:yMax];

[X,Y] = meshgrid(x, y);

RBFint = zeros(length(x), length(y));

fprintf("Inizio Calcolo della RBFint\n")
tic;

% Calcolo i valori interpolati
for i = 1 : length(x)
    for j= 1 : length(y)
%       Notazione matlab per la tabella: (y,x)
%       M(:,1) Prendo la prima colonna (ovvero le y)
%       M(1,:) Prendo la prima riga (ovvero le x)
        RBFint(j,i) = NetworkInterpolate(scalar2vect(x(i),y(j)),speed);
    end
end
tRBFint = toc;
fprintf("\tFinito Calcolo della RBFint\n")
tic
% Calcolo la parabola punto per punto
Z = f(X,Y);

surf(X,Y,RBFint);
colormap autumn

hold on
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
       [center] = index2state(i1, i2);
       scatter3(center(1),center(2),Q(i1,i2));
    end
end

surf(X,Y,Z,'FaceColor','g','FaceAlpha',0.15,'EdgeColor','none');
legend("RBF", "RBF center","F");
tplot = toc;
fprintf("END of Plotting\n")

end

function [val] = NetworkInterpolate(state,speed)
global w beta;
val = 0;
switch(speed)
    case {0,2}

        [rho] = NodeValue(state);
        val = rho'*w;
        
    case 1
        % Calcolo un sotto insieme
        [list] = nearCenter(state,4);
        
        [~, nPoint] = size(list);
        val = 0;
        rho=zeros(nPoint,1);
        for i = 1 : nPoint
            rho = exp(-beta*(sum((index2state(list(1,i),list(2,i))-state).^2))^0.5);
            [index] = idCenter(list(1,i),list(2,i));
            val = val + rho * w(index);
        end    
end
end

% Ritorna una lista dove ogni COLONNA è una coppia di indici
% che sono vicini dello stato preso in esame di distanza 'dist'
function [list] = nearCenter(stato,dist)
global nCenterX nCenterY

[i1, i2] = state2index(stato(1),stato(2));
list=[];
for i=i1-dist : i1+dist
    for j=i2-dist : i2+dist
    if(i>=1 && i<=nCenterX && j>=1 && j<=nCenterY)
        list = [list [i;j]];
    end
    end
end
end

function [val] = f(x,y)
% val = x.^2+y.^2;  %Parabola
%     val = sin(x);  %sinusoidale
% val = sin(x)+cos(y);  %sinusoidale
% val = sin((x/10).^2)+cos((y/10).^2);  %sinusoidale
    val = 3*x+2*y;  %piano
    
end

% function [G] = RBFMatrix ()
% global nCenterX nCenterY beta;
% [G, I] = deal( eye(nCenterX * nCenterX) );
% 
% for i = 1 : (nCenterX * nCenterY -1)
%     [i1,i2] = centerId(i);
%     [C1] = index2state(i1, i2);
%     for j = (1+i) : nCenterX * nCenterY
%         [j1,j2] = centerId(j);
%         [C2] = index2state(j1, j2);
%          G(i,j) = exp(-beta*norm(C1-C2));
%     end
% end
% 
% G = G + G' - I;
% % G = gpuArray(G);
% 
% end

function [G] = RBFMatrix ()
global nCenterX nCenterY beta;

G = eye(nCenterX * nCenterX);

for i = 1 : (nCenterX * nCenterY)
    [i1,i2] = centerId(i);
    [C1] = index2state(i1, i2);
    for j = 1 : nCenterX * nCenterY
        [j1,j2] = centerId(j);
        [C2] = index2state(j1, j2);
         G(i,j) = exp(-beta*(sum((C1-C2).^2))^0.5);
    end
end
% G = gpuArray(G);

end

function [index] = idCenter(i1,i2)
global nCenterX nCenterY;

    index = (i2-1) * nCenterX + i1;
end

function [i1,i2] = centerId(index)
global nCenterX nCenterY;
    
    i1 = mod(index,nCenterX);
%     Perchè vado da 1 a n e non da 0 a n-1!!!! (matlab antipatico!!)
    if(i1 == 0)
        i1 = nCenterX;
    end
    i2 = (index - i1)/nCenterX + 1;
%     fprintf("index = %d, i1 = %d, i2 = %d\n",index,i1,i2);
    
end

function [w] = interpolate (G,Q)

% b = gpuArray( Bvector(Q) );
b = Bvector(Q);
% Ginv = pinv(G);

w = G \ b ;
end


% points (Xi,Yi) = [f(x,y)]
function [B] = Bvector (points)
global nCenterX nCenterY;

B = zeros(nCenterX * nCenterY,1);
i=1;
for i1 = 1 : nCenterX
    for i2 = 1 : nCenterY
%         fprintf("F(C_%d,%d) = %d\n",i1,i2,i);
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
        rho(i) = exp(-beta*(sum((C1-state).^2))^0.5);
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
global xMax xmin yMax ymin;
global nCenterX nCenterY;
% VxBall
% VyBall
i1 = min(max(1,ceil((X-xmin)/xMax * nCenterX)),nCenterX);
i2 = min(max(1,ceil((Y-ymin)/yMax * nCenterY)),nCenterY);
end

% Dati gli indici ritorna le coordinate dello stato
function [center] = index2state(i1, i2)
global xMax xmin yMax ymin;
global nCenterX nCenterY;

center = [
    xmin + i1/nCenterX * abs(xMax-xmin), ...  %Xi center
    ymin + i2/nCenterY * abs(yMax-ymin), ...  %Yi center
    ];
end