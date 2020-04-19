function [chk,Qup,Qdown,Qstill,score,rimbalzi] = PongEffect(xb0,yb0,yp0,Qup,Qdown,Qstill,fig)

% close all

global L H alpha gamma eps V

% [xb0, yb0]: posizione iniziale della pallina
% [0, yp0]:   posizione iniziale della barretta

Lb = 1;                 % lunghezza della barretta
theta = 0:0.01:2*pi;
rad = 0.2;
% Figura = 1;
Figura = fig;

if Figura == 1
    clf
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
end

xb = xb0; yb = yb0; yp = yp0;                     % posizioni correnti di pallina e barretta
vx = 0.1; vy = 0.1;                               % velocità iniziale arbitraria
vb = 0.2;                                         % velocità della barretta
X1 = ceil(xb); X2 = ceil(yb);                     % stato corrente pallina e barretta
[~,clsIdx] = min(abs(V-yp));
X3 = clsIdx;

flagFirst = 1;
maxiter = 10000;
score = 0;

% finchè la pallina non finisce oltre la barretta...
counter = 0;
while xb > 0 && counter < maxiter
    % ricompensa
    reward = 0;
    
    if Figura == 1
        % disegniamo la posizione corrente della pallina
        ball = patch(xb+rad*cos(theta),yb+rad*sin(theta),[1,0,0]);
        % disegniamo la posizione corrente della barretta
        bar = line([0,0],[yp+Lb,yp-Lb]);
        bar.Color = [0,0,0];
        bar.LineWidth = 10;
        htxt = text(1,H+0.5, strcat('rimbalzi:',num2str(counter)) );
        hscore = text(4,H+0.5, strcat('punteggio:',num2str(score)) );
        hscore.Color = [1,0,0];
        pause(0.001)
    end
    
    % aggiorniamo la posizione della pallina
    X1 = ceil(xb); X2 = ceil(yb); X4 = 2*sign(vx)+1.5*(1-sign(vx)); X5 = 2*sign(vy)+1.5*(1-sign(vy));
    xb = xb+vx;
    yb = yb+vy;
    % aggiorniamo lo stato della pallina
    X1p = max(1,ceil(xb)); X2p = max(1,ceil(yb)); 
  
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
    X4p = 2*sign(vx)+1.5*(1-sign(vx)); X5p = 2*sign(vy)+1.5*(1-sign(vy));
    
    % controlliamo se la barretta è in grado di respingere la pallina
    if (xb <= rad) && (yb+rad >= yp-Lb) && (yb-rad <= yp+Lb)
        vx = -vx;
        if yb+rad <= yp-0.33*Lb || yb-rad >= yp+0.33*Lb
            lambda = rand;
            vy = 0.5*vy+(-0.02*lambda+(1-lambda)*0.02);
        end
        reward = 1;
        counter = counter+1;
    end   
    
    % aggiorniamo la posizione della barretta con strategia epsilon-greedy
    [~,clsIdx] = min(abs(V-yp));
    X3 = clsIdx;
    coin = rand;
    if coin > eps
        if Qup(X1,X2,X3,X4,X5) >= Qdown(X1,X2,X3,X4,X5) && Qup(X1,X2,X3,X4,X5) >= Qstill(X1,X2,X3,X4,X5) && (yp+Lb <= H-vb)
            yp = yp+vb;
            ctr = 1;
        elseif Qdown(X1,X2,X3,X4,X5) > Qup(X1,X2,X3,X4,X5) && Qdown(X1,X2,X3,X4,X5) >= Qstill(X1,X2,X3,X4,X5) && (yp-Lb >= vb)
            yp = yp-vb;
            ctr = -1;
        else
            yp = yp;
            ctr = 0;
        end
    elseif coin < eps
        rnd_ctr = rand;
        if rnd_ctr < 0.33 && (yp+Lb <= H-vb)
            yp = yp+vb;
            ctr = 1;
        elseif rnd_ctr >= 0.33 && rnd_ctr < 0.66 && (yp-Lb >= vb)
            yp = yp-vb;
            ctr = -1;
        else
            yp = yp;
            ctr = 0;
        end
    end
    %barretta che insegue la pallina..
    %yp = yb;
    % aggiorniamo lo stato della barretta
    [~,clsIdx] = min(abs(V-yp));
    X3p = clsIdx;
       
    % aggiorniamo le funzioni Q
    % determiniamo la migliore azione per l'iterazione successiva
    if Qup(X1p,X2p,X3p,X4p,X5p) >= Qdown(X1p,X2p,X3p,X4p,X5p) && Qup(X1p,X2p,X3p,X4p,X5p) >= Qstill(X1p,X2p,X3p,X4p,X5p) && (yp+Lb <= H-vb)
        ctrp = 1;
    elseif Qdown(X1p,X2p,X3p,X4p,X5p) > Qup(X1p,X2p,X3p,X4p,X5p) && Qdown(X1p,X2p,X3p,X4p,X5p) >= Qstill(X1p,X2p,X3p,X4p,X5p) && (yp-Lb >= vb)
        ctrp = -1;
    else
        ctrp = 0;
    end
    
    if (xb<=0)
        reward = -100;
    end
    
    % aggiorniamo la funzione Q(X,U) corretta con il valore di Q(X',U')
    if ctr == 1 && ctrp == 1
        Qup(X1,X2,X3,X4,X5) = Qup(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qup(X1p,X2p,X3p,X4p,X5p)-Qup(X1,X2,X3,X4,X5));
    elseif ctr == 1 && ctrp == 0
        Qup(X1,X2,X3,X4,X5) = Qup(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qstill(X1p,X2p,X3p,X4p,X5p)-Qup(X1,X2,X3,X4,X5));
    elseif ctr == 1 && ctrp == -1
        Qup(X1,X2,X3,X4,X5) = Qup(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qdown(X1p,X2p,X3p,X4p,X5p)-Qup(X1,X2,X3,X4,X5));
    elseif ctr == 0 && ctrp == 1
        Qstill(X1,X2,X3,X4,X5) = Qstill(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qup(X1p,X2p,X3p,X4p,X5p)-Qstill(X1,X2,X3,X4,X5));
    elseif ctr == 0 && ctrp == 0
        Qstill(X1,X2,X3,X4,X5) = Qstill(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qstill(X1p,X2p,X3p,X4p,X5p)-Qstill(X1,X2,X3,X4,X5));
    elseif ctr == 0 && ctrp == -1
        Qstill(X1,X2,X3,X4,X5) = Qstill(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qdown(X1p,X2p,X3p,X4p,X5p)-Qstill(X1,X2,X3,X4,X5));    
    elseif ctr == -1 && ctrp == 1
        Qdown(X1,X2,X3,X4,X5) = Qdown(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qup(X1p,X2p,X3p,X4p,X5p)-Qdown(X1,X2,X3,X4,X5));
    elseif ctr == -1 && ctrp == 0
        Qdown(X1,X2,X3,X4,X5) = Qdown(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qstill(X1p,X2p,X3p,X4p,X5p)-Qdown(X1,X2,X3,X4,X5));
    elseif ctr == -1 && ctrp == -1
        Qdown(X1,X2,X3,X4,X5) = Qdown(X1,X2,X3,X4,X5) + alpha*(reward+gamma*Qdown(X1p,X2p,X3p,X4p,X5p)-Qdown(X1,X2,X3,X4,X5));
    end
    
    if Figura == 1
        delete(ball)
        delete(bar)
        delete(htxt)
        delete(hscore)
    end
    
end

rimbalzi = counter;
chk = -1;