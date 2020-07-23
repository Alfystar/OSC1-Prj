% Funzione che permette di eseguire una partita
% figOnOff: 1 disegna la partita, 0 la esegue soltanto
% SBROnOff: 1 attiva la rete RBF, 0 usa il classico RL
% SBRspeedOnOff (utile solo se SBROnOff=1) : 1 Calcolo rapido prendendo
%                       pochi centri vicini, 0 Calcolo totale con tutti i centri
function [chk,Qup,Qdown,Qstill,score,rimbalzi, G] = PongEffectSpeed(xb0,yb0,ys0,Qup,Qdown,Qstill,~, G, SBROnOff,SBRspeedOnOff)


global L H alpha gamma eps %V
% global Ln Hn Vn velSig    % Settori Discretizzati

global beta;
beta = 0.3;
% [xb0, yb0]: posizione iniziale della pallina
% [0, yp0]:   posizione iniziale della barretta


Lb = 1;                 % lunghezza della barretta
%theta = 0:0.01:2*pi;
rad = 0.2;


xb = xb0; yb = yb0; ys = ys0;                     % posizioni correnti di pallina e barretta
vx = 0.1; vy = 0.1;                               % velocità iniziale arbitraria
vb = 0.2;                                         % velocità della barretta COSTANTE

% flagFirst = 1;
maxiter = 100;
score = 0;

if G == 0       % Per evitare di ricalcolare sempre G che non cambia mai
    G = RBFMatrix ();   % Già GPU Array
    % G = (G);
end

Wup = interpolate(G,Qup);
Wstill = interpolate(G,Qstill);
Wdown = interpolate(G,Qdown);

%[i1n, i2n, i3n, i4n ,i5n] = state2index(xb,yb,ys,vx,vy);

% finchè la pallina non finisce oltre la barretta...
counter = 0;
while xb > 0 && counter < maxiter
    % ricompensa
    reward = 0;
    ctr = 0;
    ctrN = 0;
    
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
    if coin >= eps
        if (SBROnOff == 0 ) % procedo con classica RL
            if Qup(i1,i2,i3,i4,i5) >= Qdown(i1,i2,i3,i4,i5) && Qup(i1,i2,i3,i4,i5) >= Qstill(i1,i2,i3,i4,i5) && (ys+Lb <= H-vb)
                ys = ys+vb;
                ctr = 1;
            elseif Qdown(i1,i2,i3,i4,i5) > Qup(i1,i2,i3,i4,i5) && Qdown(i1,i2,i3,i4,i5) >= Qstill(i1,i2,i3,i4,i5) && (ys-Lb >= vb)
                ys = ys-vb;
                ctr = -1;
            else
                % ys = ys;
                ctr = 0;
            end
        end
        if (SBROnOff == 1 ) % procedo con SBR
            [ctr] = bestControl(scalar2vect(xb,yb,ys,vx,vy), Wdown, Wstill, Wup,SBRspeedOnOff);
            if ctr == 1 && (ys+Lb <= H-vb)
                ys = ys+vb;
            elseif ctr == -1 && (ys-Lb >= vb)
                ys = ys-vb;
            else
                % ys = ys;
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
            %ys = ys;
            ctr = 0;
        end
    end
    
    
    % aggiorniamo lo stato della barretta
    %     [~,clsIdx] = min(abs(V-ys));
    %     i3n = clsIdx;
    
    [i1n, i2n, i3n, i4n ,i5n] = state2index(xb,yb,ys,vx,vy);
    
    % aggiorniamo le funzioni Q
    % determiniamo la migliore azione per l'iterazione successiva
    if (SBROnOff == 0 ) % procedo con classica RL
        if Qup(i1n,i2n,i3n,i4n,i5n) >= Qdown(i1n,i2n,i3n,i4n,i5n) && Qup(i1n,i2n,i3n,i4n,i5n) >= Qstill(i1n,i2n,i3n,i4n,i5n) && (ys+Lb <= H-vb)
            ctrN = 1;
        elseif Qdown(i1n,i2n,i3n,i4n,i5n) > Qup(i1n,i2n,i3n,i4n,i5n) && Qdown(i1n,i2n,i3n,i4n,i5n) >= Qstill(i1n,i2n,i3n,i4n,i5n) && (ys-Lb >= vb)
            ctrN = -1;
        else
            ctrN = 0;
        end
    end
    
    if (SBROnOff == 1 ) % procedo con SBR
        [ctrN] = bestControl (scalar2vect(xb,yb,ys,vx,vy), Wdown, Wstill, Wup,SBRspeedOnOff);
        if ctrN == 1 && ~(ys+Lb <= H-vb)
            ctrN = 0;
        elseif ctrN == -1 && ~(ys-Lb >= vb)
            ctrN = 0;
        end
    end
    
    if (xb<=0) % la pallina mi sorpassa, ho perso
        reward = -5;
    end
    
    % aggiorniamo la funzione Q(X,U) corretta con il valore di Q(X',U')
    if ctr == 1 && ctrN == 1
        Qup(i1,i2,i3,i4,i5) = Qup(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qup(i1n,i2n,i3n,i4n,i5n)-Qup(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wup = interpolate(G,Qup);
        end
    elseif ctr == 1 && ctrN == 0
        Qup(i1,i2,i3,i4,i5) = Qup(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qstill(i1n,i2n,i3n,i4n,i5n)-Qup(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wup = interpolate(G,Qup);
        end
    elseif ctr == 1 && ctrN == -1
        Qup(i1,i2,i3,i4,i5) = Qup(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qdown(i1n,i2n,i3n,i4n,i5n)-Qup(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wup = interpolate(G,Qup);
        end
    elseif ctr == 0 && ctrN == 1
        Qstill(i1,i2,i3,i4,i5) = Qstill(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qup(i1n,i2n,i3n,i4n,i5n)-Qstill(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wstill = interpolate(G,Qstill);
        end
    elseif ctr == 0 && ctrN == 0
        Qstill(i1,i2,i3,i4,i5) = Qstill(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qstill(i1n,i2n,i3n,i4n,i5n)-Qstill(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wstill = interpolate(G,Qstill);
        end
    elseif ctr == 0 && ctrN == -1
        Qstill(i1,i2,i3,i4,i5) = Qstill(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qdown(i1n,i2n,i3n,i4n,i5n)-Qstill(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wstill = interpolate(G,Qstill);
        end
    elseif ctr == -1 && ctrN == 1
        Qdown(i1,i2,i3,i4,i5) = Qdown(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qup(i1n,i2n,i3n,i4n,i5n)-Qdown(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wdown = interpolate(G,Qdown);
        end
    elseif ctr == -1 && ctrN == 0
        Qdown(i1,i2,i3,i4,i5) = Qdown(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qstill(i1n,i2n,i3n,i4n,i5n)-Qdown(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wdown = interpolate(G,Qdown);
        end
    elseif ctr == -1 && ctrN == -1
        Qdown(i1,i2,i3,i4,i5) = Qdown(i1,i2,i3,i4,i5) + alpha*(reward+gamma*Qdown(i1n,i2n,i3n,i4n,i5n)-Qdown(i1,i2,i3,i4,i5));
        if (SBROnOff == 1 && SBRspeedOnOff == 0) % Sto eseguendo la rete full
            Wdown = interpolate(G,Qdown);
        end
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
% si Aspetta Wdown, Wstill, Wup come
function ctr = bestControl(state, Wdown, Wstill, Wup, mode)
global beta;
ctr = 0;
switch(mode)
    case {0}
        
        rho = NodeValue (state);
        
        % MAX di MAX da fare
        [~,I] = max([Wdown'*rho,Wstill'*rho,Wup'*rho]);
        ctr = I - 2;
        
    case 1        % Calcolo un sotto insieme di distanza 4
        w = [Wdown, Wstill, Wup];
        [list] = nearCenter(state,1);
        [~, nPoint] = size(list);
        netVal = (zeros(1,3));
        for i = 1 : nPoint
            % Creo il vettore rho ristretto
            C = index2state(list(1,i),list(2,i),list(3,i),list(4,i),list(5,i));
            rho = exp(-beta*(norm(C-state)));
            %  Creo 3 vettori netVal per il confronto, da confrontare in seguito
            for j = 1 : 3
                [id] = coord2Id(list(1,j),list(2,j),list(3,j),list(4,j),list(5,j));
                netVal(j) = netVal(j) + rho * w(id,j);   %w(quale w, quale centro)
            end
        end
        [~,I] = max(netVal);
        ctr = I - 2;
end

end

% Ritorna un vettore
function  [rho] = NodeValue (state)
global Ln Hn V velSig;
global beta;
rho = (zeros(Ln * Hn * length(V) * velSig * velSig, 1));

for i = 1 : length(rho)
    [i1, i2, i3, i4 ,i5] = id2Coord (i);    %Trasformo l'ID, nelle sue coordinate
    [C1] = index2state(i1, i2, i3, i4 ,i5);
    rho(i) = exp(-beta*sum((C1-state).^2)); %le rho sono ordinate come la logica di centerId
    
end
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Si aspetta G come  e Q come una matrice normale
function [w] = interpolate (G,Q)
b = Bvector(Q);
% g = ( G ); % Fatto fuori per risparmiare passaggi
w = G \ b ;
end

function [G] = RBFMatrix ()
global beta;
global Ln Hn V velSig;
[G,I] = deal((eye(Ln * Hn * length(V) * velSig * velSig)));
for i = 1 : length(G)-1
    [i1,i2, i3, i4, i5] = id2Coord(i);
    [C1] = index2state(i1,i2, i3, i4, i5);
    for j = (1+i) : length(G)
        [j1,j2,j3,j4,j5] = id2Coord(j);
        [C2] = index2state(j1, j2, j3, j4, j5);
        %         fprintf("C_%d,%d - C_%d,%d = (%d-%d)[(%d,%d)(%d,%d)]\n",i1,i2,j1,j2,i,j,C1(1),C1(2),C2(1),C2(2));
        G(i,j) = exp(-beta*(sum((C1-C2).^2))^0.5);
        %         G(i,j) = exp(-beta*norm(C1-C2));
    end
end
G = G + G' - I;

end

% Si aspetta una matrice Q, e ritorna una B in
function [B] = Bvector (Q)
global Ln Hn V velSig;
B = (zeros(Ln * Hn * length(V) * velSig * velSig,1));

for i = 1 : length(B)
    [i1,i2, i3, i4, i5] = id2Coord(i);
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


function [id] = coord2Id(i1,i2,i3,i4,i5)
%Seguiamo l'algoritmo row-major
%https://en.wikipedia.org/wiki/Row-_and_column-major_order
global Ln Hn V velSig;

if (i1>Ln || i2>Hn || i3>length(V) || i4>velSig || i5>velSig)
    fprintf("[idCenter]\t\t### index out of range ###\n")
end

%id=id0+1.....il +1 serve per avere da 1 a n anche se dal punto di vista
%matematico si vuole che sia da 0 a n-1

id = i5 + velSig * ((i4-1) + velSig * ((i3-1) + length(V) * ((i2-1) + Hn * (i1-1))));


end

function [i1,i2,i3,i4,i5] = id2Coord(id)
%Seguiamo l'algoritmo row-major
%https://en.wikipedia.org/wiki/Row-_and_column-major_order
global Ln Hn V velSig;

if (id>(velSig^2*length(V)*Hn*Ln))
    fprintf("[centerId]\t\t### index out of range ###\n")
end

i5max = velSig;
i4max = velSig;
i3max = length(V);
i2max = Hn;
i1max = Ln;
N=[i5max; i4max; i3max; i2max; i1max];
I=zeros(1,length(N));

id0=id-1; %effettuiamo lo spostamento dalla mentalità di Matlab a quella matematica
for j=1:length(N)
    I(j)=mod(id0,N(j));
    id0= (id0-I(j))/N(j);
end

i5=I(1)+1;
i4=I(2)+1;
i3=I(3)+1;
i2=I(4)+1;
i1=I(5)+1;

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
            I4 = i4;
            I5 = i5;
            if((I1>=1 && I1<=Ln) && (I2>=1 && I2<=Hn) &&...
                    (I3>=1 && I3<=length(V)) &&...
                    (I4>=1 && I4<=velSig) && (I5>=1 && I5<=velSig))
                list = [list [I1;I2;I3;I4;I5]];
            end
        end
    end
end
end