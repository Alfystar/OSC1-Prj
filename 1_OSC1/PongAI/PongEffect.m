% Funzione che permette di eseguire una partita
function [chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,ys0,Qup,Qdown,Qstill,figOnOff, SBROnOff)


global L H alpha gamma eps V
global Ln Hn Vn velSig    % Settori Discretizzati

global beta;
beta = 0.3;
% [xb0, yb0]: posizione iniziale della pallina
% [0, yp0]:   posizione iniziale della barretta


Lb = 1;                 % lunghezza della barretta
theta = 0:0.01:2*pi;
rad = 0.2;

Figura = figOnOff;

if Figura == 1
    close all
    figure(1)
    hold on
    box on
    axis([-1 L+1 -1 H+1])
    % disegniamo i bordi del campo
    h1 = line([0 L],[H,H]);
    h1.Color = [0,0,0];
    h1.LineWidth = 3;
    h2 = line([L,L],[H,0]);
    h2.Color = [0,0,0];
    h2.LineWidth = 3;
    h3 = line([0,L],[0,0]);
    h3.Color = [0,0,0];
    h3.LineWidth = 3;
    hT1 = line([L,L],[1,2]);
    hT1.Color = [1,0,0];
    hT1.LineWidth = 6;
    hT1 = line([L,L],[6,7]);
    hT1.Color = [1,0,0];
    hT1.LineWidth = 6;
    
    for i = 1 : Ln
        l = line([0 L],[i/Ln*H,i/Ln*H]);
        l.Color = [0,0,0];
        l.LineWidth = 1;
    end
    
    for i = 1 : Hn
        l = line([i/Hn*L i/Hn*L],[0,H]);
        l.Color = [0,0,0];
        l.LineWidth = 1;
    end
    
    for i = 1 : length(V)
        %         xb+rad*cos(theta),yb+rad*sin(theta)
        ball = fill(0.1*cos(theta)-0.5,V(i)+0.1*sin(theta),[0,0.5,0.5]);
    end
    
    
end

xb = xb0; yb = yb0; ys = ys0;                     % posizioni correnti di pallina e barretta
vx = 0.1; vy = 0.1;                               % velocità iniziale arbitraria
vb = 0.2;                                         % velocità della barretta COSTANTE

flagFirst = 1;
maxiter = 10000;
score = 0;

G = RBFMatrix ();
G = gpuArray( G );

% Wup = G\Bvector(Qup);
% Wstill = G\Bvector(Qstill);
% Wdown = G\Bvector(Qdown);

Wup = interpolate(G,Qup);
Wstill = interpolate(G,Qstill);
Wdown = interpolate(G,Qdown);

[i1n, i2n, i3n, i4n ,i5n] = state2index(xb,yb,ys,vx,vy);

% finchè la pallina non finisce oltre la barretta...
counter = 0;
while xb > 0 && counter < maxiter
    % ricompensa
    reward = 0;
    
    if Figura == 1
        % disegniamo la posizione corrente della pallina
        
        if(i5n == 1) % neg
            C = [0.8,0,0];
        elseif(i5n == 2) % ~0
            C = [0,0,0];
        elseif(i5n == 3) % pos
            C = [0,0.8,0];
        end
        
        ball = patch(xb+rad*cos(theta),yb+rad*sin(theta),C);
        
        % disegniamo la posizione corrente della barretta
        bar = line([0,0],[ys+Lb,ys-Lb]);
        barCenter = fill(0.1*cos(theta),ys+0.1*sin(theta),[0.8,0,0]);
        bar.Color = [0,0,0];
        bar.LineWidth = 10;
        htxt = text(1,H+0.5, strcat('rimbalzi:',num2str(counter)) );
        hscore = text(4,H+0.5, strcat('punteggio:',num2str(score)) );
        hscore.Color = [1,0,0];
        pause(0.001)
    end
    
    
    
    
    [i1, i2, i3, i4 ,i5] = state2index(xb,yb,ys,vx,vy);
    
    
    
    % aggiorniamo la posizione della pallina
    xb = xb+vx;
    yb = yb+vy;
    
    % aggiorniamo lo stato della pallina
    
    % controlliamo se la pallina sbatte contro un bordo
    if (xb >= L-rad) && (vx >= 0)  % tocca il fondo
        vx = -vx;
        if (yb >= 1 && yb <= 2) || (yb >= 6 && yb <= 7)
            reward = 5;
            score = score + 1;
        end
    elseif (yb >= H-rad) && (vy >= 0)  %tocca il bordo superiore
        vy = -vy;
    elseif (yb <= rad) && (vy <= 0)    %tocca il bordo inferiore
        vy = -vy;
    end
    
    % sassano aggiornava tutto tranne i3 qua
    %[i1n, i2n, i3n, i4n ,i5n] = state2index(xb,yb,ys,vx,vy);
    
    % controlliamo se la barretta è in grado di respingere la pallina, e in
    % caso assegno il Reward_K+1
    if (xb <= rad) && (yb+rad >= ys-Lb) && (yb-rad <= ys+Lb)
        vx = -vx;
        if yb+rad <= ys-0.33*Lb || yb-rad >= ys+0.33*Lb
            lambda = rand;
            vy = 0.5*vy+(-0.02*lambda+(1-lambda)*0.02);
        end
        reward = 1;
        counter = counter+1;
    end
    
    
    
    % aggiorniamo la posizione della barretta con strategia epsilon-greedy
    coin = rand;
    if coin > eps
        if (SBROnOff == 0 ) % procedo con classica RL
            if Qup(i1,i2,i3,i4,i5) >= Qdown(i1,i2,i3,i4,i5) && Qup(i1,i2,i3,i4,i5) >= Qstill(i1,i2,i3,i4,i5) && (ys+Lb <= H-vb)
                ys = ys+vb;
                ctr = 1;
            elseif Qdown(i1,i2,i3,i4,i5) > Qup(i1,i2,i3,i4,i5) && Qdown(i1,i2,i3,i4,i5) >= Qstill(i1,i2,i3,i4,i5) && (ys-Lb >= vb)
                ys = ys-vb;
                ctr = -1;
            else
                ys = ys;
                ctr = 0;
            end
        end
        if (SBROnOff == 1 ) % procedo con SBR
            [ctr] = bestControll (scalar2vect(xb,yb,ys,vx,vy), Wdown, Wstill, Wup);
            if ctr == 1 && (ys+Lb <= H-vb)
                ys = ys+vb;
            elseif ctr == -1 && (ys-Lb >= vb)
                ys = ys-vb;
            else
                ys = ys;
            end
        end
    elseif coin < eps
        rnd_ctr = rand;
        if rnd_ctr < 0.33 && (ys+Lb <= H-vb)
            ys = ys+vb;
            ctr = 1;
        elseif rnd_ctr >= 0.33 && rnd_ctr < 0.66 && (ys-Lb >= vb)
            ys = ys-vb;
            ctr = -1;
        else
            ys = ys;
            ctr = 0;
        end
    end
    
    
    
    
    % aggiorniamo lo stato della barretta
    %     [~,clsIdx] = min(abs(V-ys));
    %     i3n = clsIdx;
    
    [i1n, i2n, i3n, i4n ,i5n] = state2index(xb,yb,ys,vx,vy);
    
    % aggiorniamo le funzioni Q
    % determiniamo la migliore azione per l'iterazione successiva
    if (SBROnOff == 0 ) % procedo con SBR
        if Qup(i1n,i2n,i3n,i4n,i5n) >= Qdown(i1n,i2n,i3n,i4n,i5n) && Qup(i1n,i2n,i3n,i4n,i5n) >= Qstill(i1n,i2n,i3n,i4n,i5n) && (ys+Lb <= H-vb)
            ctrN = 1;
        elseif Qdown(i1n,i2n,i3n,i4n,i5n) > Qup(i1n,i2n,i3n,i4n,i5n) && Qdown(i1n,i2n,i3n,i4n,i5n) >= Qstill(i1n,i2n,i3n,i4n,i5n) && (ys-Lb >= vb)
            ctrN = -1;
        else
            ctrN = 0;
        end
    end
    
    if (SBROnOff == 1 ) % procedo con SBR
        [ctrN] = bestControll (scalar2vect(xb,yb,ys,vx,vy), Wdown, Wstill, Wup);
        if ctrN == 1 && ~(ys+Lb <= H-vb)
            ctrN = 0;
        elseif ctrN == -1 && ~(ys-Lb >= vb)
            ctrN = 0;
        end
    end
    
    if (xb<=0)
        reward = -1;
    end
    
    % aggiorniamo la funzione Q(X,U) corretta con il valore di Q(X',U')
    if ctr == 1 && ctrN == 1
        Qup(i1,i2,i3,i4,i5) = Qup(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qup(i1n,i2n,i3n,i4n,i5n)-Qup(i1,i2,i3,i4,i5));
        %         Wup = interpolate(G,Qup);
    elseif ctr == 1 && ctrN == 0
        Qup(i1,i2,i3,i4,i5) = Qup(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qstill(i1n,i2n,i3n,i4n,i5n)-Qup(i1,i2,i3,i4,i5));
        %         Wup = interpolate(G,Qup);
    elseif ctr == 1 && ctrN == -1
        Qup(i1,i2,i3,i4,i5) = Qup(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qdown(i1n,i2n,i3n,i4n,i5n)-Qup(i1,i2,i3,i4,i5));
        %         Wup = interpolate(G,Qup);
    elseif ctr == 0 && ctrN == 1
        Qstill(i1,i2,i3,i4,i5) = Qstill(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qup(i1n,i2n,i3n,i4n,i5n)-Qstill(i1,i2,i3,i4,i5));
        %         Wstill = interpolate(G,Qstill);
    elseif ctr == 0 && ctrN == 0
        Qstill(i1,i2,i3,i4,i5) = Qstill(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qstill(i1n,i2n,i3n,i4n,i5n)-Qstill(i1,i2,i3,i4,i5));
        %         Wstill = interpolate(G,Qstill);
    elseif ctr == 0 && ctrN == -1
        Qstill(i1,i2,i3,i4,i5) = Qstill(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qdown(i1n,i2n,i3n,i4n,i5n)-Qstill(i1,i2,i3,i4,i5));
        %         Wstill = interpolate(G,Qstill);
    elseif ctr == -1 && ctrN == 1
        Qdown(i1,i2,i3,i4,i5) = Qdown(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qup(i1n,i2n,i3n,i4n,i5n)-Qdown(i1,i2,i3,i4,i5));
        %         Wdown = interpolate(G,Qdown);
    elseif ctr == -1 && ctrN == 0
        Qdown(i1,i2,i3,i4,i5) = Qdown(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qstill(i1n,i2n,i3n,i4n,i5n)-Qdown(i1,i2,i3,i4,i5));
        %         Wdown = interpolate(G,Qdown);
    elseif ctr == -1 && ctrN == -1
        Qdown(i1,i2,i3,i4,i5) = Qdown(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qdown(i1n,i2n,i3n,i4n,i5n)-Qdown(i1,i2,i3,i4,i5));
        %         Wdown = interpolate(G,Qdown);
    end
    
    if Figura == 1
        delete(ball)
        delete(bar)
        delete(barCenter)
        delete(htxt)
        delete(hscore)
    end
    
end

rimbalzi = counter;
chk = -1;
end

% X1(Xball)  = Xpalla
% X2(Yball)  = Ypalla
% X3(Ybarr)  = ybarra
% X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos
% X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos
% Indici i in base a Ln, Hn e Vn che indicano il livello di
% discretizzazione


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% mode = 0: Interpolazione totale, 1: Interpolazione con vicini di distanza 4
function [ctr] = bestControll (state, Wdown, Wstill, Wup, mode)
ctr = 0;
w = [Wdown, Wstill, Wup];
switch(mode)
    case {0}

        rho = gpuArray(NodeValue (state));
        % Wdown = gpuArray(Wdown);
        % Wstill = gpuArray(Wstill);
        % Wup = gpuArray(Wup);
        
        % MAX di MAX da fare
        [~,I] = max([Wdown'*rho,Wstill'*rho,Wup'*rho]);
        ctr = I - 2;
        
    case 1        % Calcolo un sotto insieme di distanza 4
        [list] = nearCenter(state,4);
        [~, nPoint] = size(list);
        netVal = zeros(1,length(w));
        for i = 1 : nPoint
%             Creo il vettore rho ristretto
            rho = exp(-beta*(sum((index2state(list(1,i),list(2,i))-state).^2))^0.5);
%             Creo 3 vettori netVal per il confronto, da confrontare in seguito
            for j = 1 : length(w)
                [index] = indexCenter(list(1,i),list(2,i));
                netVal(j) = netVal(j) + rho * w(j,index);   %w(quale w, quale centro)
            end 
        end
        [~,I] = max(netVal);
        ctr = I - 2;        
end

end


function  [rho] = NodeValue (state)
global Ln Hn V velSig;
global beta;
rho = zeros(Ln * Hn * length(V) * velSig * velSig, 1);
% i=1;
% for i1 = 1 : Ln
%     for i2 = 1 : Hn
%         for i3 = 1 : length(V)
%             for i4 = 1 : velSig
%                 for i5 = 1 : velSig
%                     [C1] = index2state(i1, i2, i3, i4 ,i5);
%                     rho(i) = exp(-beta*sum((C1-state).^2));
%                     i=i+1;
%                 end
%             end
%         end
%     end
% end
for i = 1 : length(rho)
    [i1, i2, i3, i4 ,i5] = id2Center (i);    %Trasformo l'ID, nelle sue coordinate
    [C1] = index2state(i1, i2, i3, i4 ,i5);
    rho(i) = exp(-beta*sum((C1-state).^2)); %le rho sono ordinate come la logica di centerId
    
end
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function [w] = interpolate (G,Q)
b = gpuArray(Bvector(Q));
% g = gpuArray( G ); % Fatto fuori per risparmiare passaggi
w = G \ b ;
end

function [G] = RBFMatrix ()
global beta;
global Ln Hn V velSig;
G = eye(Ln * Hn * length(V) * velSig * velSig);
% i = 1;
% for i1 = 1 : Ln
%     for i2 = 1 : Hn
%         for i3 = 1 : length(V)
%             for i4 = 1 : velSig
%                 interpolatefor i5 = 1 : velSig
%                 [C1] = index2state(i1, i2, i3, i4 ,i5);
%                 j = i;
%                 % In teoria G è simmetrica, e la diagonale è tutta di 1
%                 for j1 = i1 : Ln
%                     for j2 = i2 : Hn
%                         for j3 = i3 : length(V)
%                             for j4 = i4 : velSig
%                                 for j5 = i5 : velSig
%                                     [C2] = index2state(j1, j2, j3, j4 ,j5);
%                                     G(i,j) = exp(-beta*sum((C1-C2).^2));
%                                     G(j,i) = G(i,j);
%                                     j = j+1;
%                                 end
%                             end
%                         end
%                     end
%                 end
%                 i = i+1;
%                 
%             end
%         end
%     end
% end

for i = 1 : length(g)
    [i1,i2, i3, i4, i5] = center2Id(i);
    [C1] = index2state(i1,i2, i3, i4, i5);
    for j = 1 : length(g)
        [j1,j2,j3,j4,j5] = id2Center(j);
        [C2] = index2state(j1, j2, j3, j4, j5);
%         fprintf("C_%d,%d - C_%d,%d = (%d-%d)[(%d,%d)(%d,%d)]\n",i1,i2,j1,j2,i,j,C1(1),C1(2),C2(1),C2(2));
        G(i,j) = exp(-beta*(sum((C1-C2).^2))^0.5);
    end
end

end

function [B] = Bvector (Q)
global Ln Hn V velSig;
B = zeros(Ln * Hn * length(V) * velSig * velSig,1);

for i = 1 : length(B)
    [i1,i2, i3, i4, i5] = id2Center(i);
    B(i) = Q(i1, i2, i3, i4 ,i5);
end

end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function [state] = scalar2vect(Xball,Yball,Ybarr,VxBall,VyBall)
state = [Xball,Yball,Ybarr,VxBall,VyBall];
end

function [i1, i2, i3, i4 ,i5] = state2index(Xball,Yball,Ybarr,VxBall,VyBall)
global L H V;
global Ln Hn;
% VxBall
% VyBall
i1 = min(max(1,ceil(Xball/L * Ln)),Ln);
i2 = min(max(1,ceil(Yball/H * Hn)),Hn);

[~,i3] = min(abs(V-Ybarr));

if(abs(VxBall)<0.01)
    i4 = 2;
else
    i4 = sign(VxBall) + 2;
end

if(abs(VyBall)<0.01)
    i5 = 2;
else
    i5 = sign(VyBall) + 2;
end

end

function [center] = index2state(i1, i2, i3, i4 ,i5)
global L H V;
global Ln Hn;
center = [
    i1/Ln * L, ...  %Xball center
    i2/Hn * H, ...  %Yball center
    i3/length(V) * V(end), ...      %Ybarr center
    i4-2, ...     %VxBall center
    i5-2 ...      %VyBall center
    ];
end


%TODO adattare al problema 5D
function [id] = center2Id(i1,i2)
global nCenterX nCenterY;

    index = (i2-1) * nCenterX + i1;
end

%TODO adattare al problema 5D
function [i1,i2] = id2Center(id)
global nCenterX nCenterY;
    
    i1 = mod(index,nCenterX);
%     Perchè vado da 1 a n e non da 0 a n-1!!!! (matlab antipatico!!)
    if(i1 == 0)
        i1 = nCenterX;
    end
    i2 = (index - i1)/nCenterX + 1;
%     fprintf("index = %d, i1 = %d, i2 = %d\n",index,i1,i2);
    
end

% Ritorna una lista dove ogni COLONNA è una coppia di indici
% che sono vicini dello stato preso in esame di distanza 'dist'
function [list] = nearCenter(st,dist)
global Ln Hn V velSig;
% Ln        Numero divisioni in X
% Hn        Numero divisioni in Y
% velSig:   2 Var, Vx e Vy, se 1 = neg, 2 = ~0 , 3 = pos, 

% X1(Xball)  = Xpalla
% X2(Yball)  = Ypalla
% X3(Ybarr)  = ybarra
% X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos
% X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos
% Indici i in base a Ln, Hn e Vn che indicano il livello di
% discretizzazione
[i1, i2, i3, i4 ,i5] = state2index(st(1),st(2),st(3),st(4),st(5));
list=[];
for I1=i1-dist : i1+dist
    for I2=i2-dist : i2+dist
        for I3=i3-dist : i3+dist
            for I4=i4-dist : i4+dist
                for I5=i5-dist : i5+dist
                    if((I1>=1 && I1<=Ln) && (I2>=1 && I2<=Hn) &&...
                       (I3>=1 && I3<=length(V)) &&...
                       (I4>=1 && I4<=velSig) && (I5>=1 && I5<=velSig))
                        list = [list [I1;I2;I3;I4;I5]];
                    end
                end
            end
        end
    end
end
end