close all
clear all
clc


global Ln Hn Vn velSig    % Settori Discretizzati
Ln = 2;                 % Numero divisioni in X
Hn = 4;                 % Numero divisioni in Y
Vn = 1;                 % Distanza tra 2 coordinate della barra
velSig = 3;             % 1 = neg, 2 = ~0 , 3 = pos, 2 Var, Vx e Vy

global L H alpha gamma eps V
L = 10;                  % profondità del campo
H = 8;                  % altezza del campo
gamma = 0.3;              % Peso esperienze future
alpha = 0.8;            % Peso nuova esperienza
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
plotMed = 2;
scorePlotmed = [0];
rimbalziPlotmed = [0];
scorePlotFilter = [0];
rimbalziPlotFilter = [0];

% gamma = 0.3;              % Peso esperienze future
% alpha = 1;            % Peso nuova esperienza
% eps = 1;              % Tolleranza tiro moneta per esplorare (0 non esploro)


%% Inizializazione da file
% load('1_RBF_Trunck_4_giugno.mat');
% load('2_RL_4_giugno.mat');



%% Parametri di apprendimento
% gamma = 0.3;              % Peso esperienze future
% alpha = 1;            % Peso nuova esperienza
% eps = 1;              % Tolleranza tiro moneta per esplorare (0 non esploro)

%% Simularione; per fare iterazioni, eseguire questa porzione
clc
chk = -1;
ite = 10;
itePlot = 10;
iSave = 10^4;

G = 0;
a = 1/2^6;
b = 1/2^10;
while(i <= 10^6)
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
        [~,Qup,Qdown,Qstill,score,rimbalzi, G] = PongEffectSpeed_mex(xb0,yb0,yp0,Qup,Qdown,Qstill,0,G,1,1);
        scorePlot(j) = score;
        rimbalziPlot(j) = rimbalzi;
        scoreTot = scoreTot + score;
        rimbalziTot = rimbalziTot + rimbalzi;
        i = i+1;
    end
    fprintf("\n");
    
    eps = eps*0.9995;
    alpha = alpha*0.99995;
    gamma = gamma *1.0005;
    if(gamma >=0.85)
        gamma = 0.85;
    end
    
    scorePlotmed(plotMed) = scoreTot/j;
    rimbalziPlotmed(plotMed) = rimbalziTot/j;
    scorePlotFilter(plotMed) = scorePlotFilter(plotMed-1)*(1-a) + scorePlotmed(plotMed)*a;
    rimbalziPlotFilter(plotMed) = rimbalziPlotFilter(plotMed-1)*(1-b) + rimbalziPlotmed(plotMed)*b;
    plotMed = plotMed+1;
    
    %plot del grafico passo passo; con il codice compilato il rallentamento
    %è evidente, conviene togliere statPrint
    if(mod(plotMed,itePlot)==0)
%         statPrint(scorePlot,rimbalziPlot,scorePlotmed,scorePlotFilter,rimbalziPlotmed,rimbalziPlotFilter)
    end
    
    if(mod(plotMed,iSave) == 0)
        save("RBF_trunk_backup.mat")
    end
    
    fprintf("Iterazione %d, scoreMed = %f, rimbalsiMed = %f\n",i,scoreTot/j, rimbalziTot/j);
    fprintf("eps = %.3f\talpha= %.3f\tgamma = %.3f\t\n", eps, alpha, gamma);
    fprintf("\n");
end

% commentare da qui per generare il codice mex



%% Calcolo della funzione Valore %%
Vpi = zeros(Ln,Hn,length(V),velSig,velSig);
for i =i/Hn*L 1:L+1
    for j = 1:H+1
        for k = 1:length(V)
            Vpi(i,j,k,1,1) = max([Qup(i,j,k,1,1),Qdown(i,j,k,1,1),Qstill(i,j,k,1,1)]);
        end
    end
end

%% Simulazione Grafica Pong
clc
epsOld = eps;
eps = 0;
xRnd = rand; yRnd = rand; bRnd = rand;
xb0 = L*xRnd;
yb0 = H*yRnd;
yp0 = (H-1)*bRnd+1;
G=0;
[chk,Qup,Qdown,Qstill,score,rimbalzi,G] = PongEffectVisual(xb0,yb0,yp0,Qup,Qdown,Qstill,1,G,1,1);
eps = epsOld;



%% Visualizzazione andamento Learning
scorePlotFilter = zeros(1,length(scorePlotmed));
rimbalziPlotFilter = zeros(1,length(scorePlotmed));
a = 1/2^6;
b = 1/2^10;
for i= 1 : length(scorePlotmed)
    scorePlotFilter(i+1) = scorePlotFilter(i)*(1-a) + scorePlotmed(i)*a;
    rimbalziPlotFilter(i+1) = rimbalziPlotFilter(i)*(1-b) + rimbalziPlotmed(i)*b;
end
statPrint(scorePlot,rimbalziPlot,scorePlotmed,scorePlotFilter,rimbalziPlotmed,rimbalziPlotFilter)

%%

function [] = statPrint(scorePlot,rimbalziPlot,scorePlotmed,scorePlotFilter,rimbalziPlotmed,rimbalziPlotFilter)
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
hold on
plot(scorePlotFilter,'g');
ylim([0,max(1.5,max(scorePlotFilter)*1.5)]);

grid on
legend("scorePlotmed");

subplot(1,2,2);
plot(rimbalziPlotmed);
hold on
plot(rimbalziPlotFilter,'g');
ylim([0,max(rimbalziPlotFilter)*1.5]);

grid on
legend("rimbalziPlotmed");
end
