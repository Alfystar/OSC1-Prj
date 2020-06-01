close all
clear all
clc


global Ln Hn Vn velSig    % Settori Discretizzati
Ln = 3;                 % Numero divisioni in X
Hn = 3;                 % Numero divisioni in Y
Vn = 1;                 % Distanza tra 2 coordinate della barra
velSig = 3;             % 1 = neg, 2 = ~0 , 3 = pos, 2 Var, Vx e Vy

global L H alpha gamma eps V
L = 10;                  % profondità del campo
H = 8;                  % altezza del campo
gamma = 1;              % Peso esperienze future
alpha = 0.9;            % Peso nuova esperienza
eps = 0.01;              % Tolleranza tiro moneta per esplorare (0 non esploro)
V = 1:Vn:H-1;
i=1;        % Variabile per contare le iterazioni


% X1(Xball)  = Xpalla 
% X2(Yball)  = Ypalla 
% X3(Ybarr)  = ybarra
% X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos
% X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos
% Indici i in base a Ln, Hn e Vn che indicano il livello di
% discretizzazione

% inizializzazione casuale
rng(4)
Qup =       zeros(Ln,Hn,length(V),velSig,velSig);
Qdown =     zeros(Ln,Hn,length(V),velSig,velSig);
Qstill =    zeros(Ln,Hn,length(V),velSig,velSig);
plotMed = 1;
scorePlotmed = [];
rimbalziPlotmed = [];


%% Inizializazione da file
Q = load('Qreduce1.mat');
Qup = Q.Qup; Qdown = Q.Qdown; Qstill = Q.Qstill;
plotMed = Q.plotMed; scorePlotmed = Q.scorePlotmed; rimbalziPlotmed = Q.rimbalziPlotmed;
gamma = Q.gamma; alpha = Q.alpha; eps = Q.eps;              


%% Parametri di apprendimento
gamma = 0.1;              % Peso esperienze future
alpha = 1;            % Peso nuova esperienza
eps = 1;              % Tolleranza tiro moneta per esplorare (0 non esploro)

%%
clc
chk = -1;
ite = 10;


while(1)
    %     break;      %Commentare per proseguire addestramento
    
    QupOld = Qup;
    QdownOld = Qdown;
    QstillOld = Qstill;
    scoreTot=0;
    rimbalziTot=0;
    scorePlot = zeros(ite,1);
    rimbalziPlot= zeros(ite,1);
    for j=1:ite
        xRnd = rand; yRnd = rand; bRnd = rand;
        xb0 = L*xRnd;
        yb0 = H*yRnd;
        yp0 = (H-1)*bRnd+1;
        [chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,yp0,Qup,Qdown,Qstill,0, 1,0);
        scorePlot(j) = score;
        rimbalziPlot(j) = rimbalzi;
        scoreTot = scoreTot + score;
        rimbalziTot = rimbalziTot + rimbalzi;
        i = i+1
        
    end
    %[chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,yp0,Qup,Qdown,Qstill,1);
    eps = eps*0.99;
    alpha = alpha*0.9995;
    gamma = gamma *1.0005;
    if(gamma >=0.95)
        gamma = 0.95;
    end
    
    scorePlotmed(plotMed) = scoreTot/j;
    rimbalziPlotmed(plotMed) = rimbalziTot/j;
    plotMed = plotMed+1;
    figure(2)
    clf
    subplot(1,2,1);
    plot(scorePlot);
    grid on
    legend("score");
    
    subplot(1,2,2);
    plot(rimbalziPlot);
    grid on
    legend("rimbalzi");
    
    figure(3)
    clf
    subplot(1,2,1);
    plot(scorePlotmed);
    grid on
    legend("scorePlotmed");
    
    subplot(1,2,2);
    plot(rimbalziPlotmed);
    grid on
    legend("rimbalziPlotmed");
    
    
    fprintf("Iterazione %d, scoreMed = %f, rimbalsiMed = %f\n",i,scoreTot/j, rimbalziTot/j);
    fprintf("Le matrici sono cambiate?\n");
    fprintf("Qup %d\n", ~isequal(Qup,QupOld));
    fprintf("Qdown %d\n", ~isequal(Qdown,QdownOld));
    fprintf("Qstill %d\n", ~isequal(Qstill,QstillOld));
    fprintf("eps = %.3f\talpha= %.3f\tgamma = %.3f\t\n", eps, alpha, gamma);
    fprintf("\n");
end

%%
%%% Calcolo della funzione Valore %%%
Vpi = zeros(Ln,Hn,length(V),velSig,velSig);
for i =i/Hn*L 1:L+1
    for j = 1:H+1
        for k = 1:length(V)
            Vpi(i,j,k,1,1) = max([Qup(i,j,k,1,1),Qdown(i,j,k,1,1),Qstill(i,j,k,1,1)]);
        end
    end
end

%%
clc
epsOld = eps;
eps = 0;
xRnd = rand; yRnd = rand; bRnd = rand;
xb0 = L*xRnd;
yb0 = H*yRnd;
yp0 = (H-1)*bRnd+1;
[chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,yp0,Qup,Qdown,Qstill,1,1);
eps = epsOld;

