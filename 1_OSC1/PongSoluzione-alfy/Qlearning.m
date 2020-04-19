close all
clear all
clc

global L H alpha gamma eps V

L = 10;                  % profondità del campo
H = 8;                  % altezza del campo
gamma = 1;              % Peso esperienze future
alpha = 0.9;            % Peso nuova esperienza
eps = 0.01;              % Tolleranza tiro moneta per esplorare (0 non esploro)
V = 1:0.5:H-1;
i=1;        % Variabile per contare le iterazioni

% inizializzazione casuale
rng(4)
% Q = load('QBest.mat');
% Qup = Q.Qup; Qdown = Q.Qdown; Qstill = Q.Qstill;
% X1 = Xpalla arrotondato per eccesso (L+1)
% X2 = Ypalla arrotondato per eccesso (H+1)
% X3 = ybarra
% X4 = se vx pos = 2, se vx neg = 1, (se vx=0 1.5!!!)
% X5 = se vy pos = 2, se vy neg = 1, (se vy=0 1.5!!!)
Qup =       zeros(L+1,H+1,length(V),2,2);
Qdown =     zeros(L+1,H+1,length(V),2,2);
Qstill =    zeros(L+1,H+1,length(V),2,2);


%%
chk = -1;
gamma = 0.1;              % Peso esperienze future
alpha = 1;            % Peso nuova esperienza
eps = 1;              % Tolleranza tiro moneta per esplorare (0 non esploro)

while(1)
%     break;      %Commentare per proseguire addestramento
    
    QupOld = Qup;
    QdownOld = Qdown;
    QstillOld = Qstill;
    scoreTot=0;
    rimbalziTot=0;
    for j=1:1000
        xRnd = rand; yRnd = rand; bRnd = rand;
        xb0 = L*xRnd;
        yb0 = H*yRnd;
        yp0 = (H-1)*bRnd+1;
        [chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,yp0,Qup,Qdown,Qstill,0);
        scoreTot = scoreTot +score;
        rimbalziTot = rimbalziTot +rimbalzi;
        i = i+1;
        
    end
    %[chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,yp0,Qup,Qdown,Qstill,1);
    eps = eps*0.999;
    alpha = alpha*0.99999;
    gamma = gamma *1.000001;
    if(gamma >=0.95)
        gamma = 0.95;
    end
    fprintf("Iterazione %d, scoreMed = %f, rimbalsiMed = %f\n",i,scoreTot/j, rimbalziTot/j);
    fprintf("Le matrici sono cambiate?\n");
    fprintf("Qup %d\n", ~isequal(Qup,QupOld));
    fprintf("Qdown %d\n", ~isequal(Qdown,QdownOld));
    fprintf("Qstill %d\n\n", ~isequal(Qstill,QstillOld));
    
end

%%
%%% Calcolo della funzione Valore %%%
Vpi = zeros(L+1,H+1,length(V),2,2);
for i = 1:L+1
    for j = 1:H+1
        for k = 1:length(V)
            Vpi(i,j,k,1,1) = max([Qup(i,j,k,1,1),Qdown(i,j,k,1,1),Qstill(i,j,k,1,1)]);
        end
    end
end

%%
figure(1)
epsOld = eps;
eps=0;
xRnd = rand; yRnd = rand; bRnd = rand;
xb0 = L*xRnd;
yb0 = H*yRnd;
yp0 = (H-1)*bRnd+1;

[chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,yp0,Qup,Qdown,Qstill,1);
eps =epsOld;

