function chk = PongTemplate(xb0,yb0,yp0)

close all

global L H 

% [xb0, yb0]: posizione iniziale della pallina
% [0, yp0]:   posizione iniziale della barretta

Lb = 1;                 % lunghezza della barretta
theta = 0:0.01:2*pi;    % campionamento angolare per disegnare la pallina
rad = 0.2;              % raggio della pallina
Figura = 1;             % 1: la figura viene mostrata, 0: la figura non viene mostrata (esecuzione rapida)
ScreenRefresh = 0.001;  % rapidità di aggiornamento della visualizzazione della pallina

if Figura == 1
    figure(1)
    hold on; box on; axis([-1 L+1 -1 H+1])
    % disegniamo i bordi del campo
    line([0 L],[H,H],'Color',[0,0,0],'LineWidth',3);
    line([L,L],[H,0],'Color',[0,0,0],'LineWidth',3);
    line([0,L],[0,0],'Color',[0,0,0],'LineWidth',3);
    % disegniamo i target
    line([L,L],[1,2],'Color',[1,0,0],'LineWidth',6);
    line([L,L],[6,7],'Color',[1,0,0],'LineWidth',6);
end

xb = xb0; yb = yb0; yp = yp0;                     % posizioni correnti di pallina e barretta
vx = 0.1; vy = 0.1;                               % velocità iniziale della pallina
vb = 0.2;                                         % velocità della barretta

score = 0;
% finchè la pallina non finisce oltre la barretta...
counter = 0;
while xb > 0 
  
    if Figura == 1
        % disegniamo la posizione corrente della pallina
        ball = patch(xb+rad*cos(theta),yb+rad*sin(theta),[1,0,0]);
        % disegniamo la posizione corrente della barretta
        bar = line([0,0],[yp+Lb,yp-Lb],'Color',[0,0,0],'LineWidth',10);
        htxt = text(1,H+0.5, strcat('rimbalzi:',num2str(counter)) );
        hscore = text(4,H+0.5, strcat('punteggio:',num2str(score)) );
        hscore.Color = [1,0,0];
        pause(ScreenRefresh)
    end
    
    % aggiorniamo la posizione della pallina
    xb = xb+vx;
    yb = yb+vy;
   
    % controlliamo se la pallina sbatte contro un bordo
    if (xb >= L-rad) && (vx >= 0)  % tocca il fondo
        vx = -vx;
        if (yb >= 1 && yb <= 2) || (yb >= 6 && yb <= 7)
            score = score + 1;
        end
    elseif (yb >= H-rad) && (vy >= 0)  %tocca il bordo superiore
        vy = -vy;
    elseif (yb <= rad) && (vy <= 0)    %tocca il bordo inferiore
        vy = -vy;
    end
    
    % controlliamo se la barretta è in grado di respingere la pallina
    if (xb <= rad) && (yb+rad >= yp-Lb) && (yb-rad <= yp+Lb)
        vx = -vx;
        if yb+rad <= yp-0.33*Lb || yb-rad >= yp+0.33*Lb
            lambda = rand;
            vy = 0.5*vy+(-0.02*lambda+(1-lambda)*0.02);
        end
        counter = counter+1;
    end   
    
    % aggiorniamo la posizione della barretta ... attualmente in maniera
    % casuale!!
    yp = yp + (-1+2*rand)*vb;
    
    % aggiorniamo la figura
    if Figura == 1
        delete(ball)
        delete(bar)
        delete(htxt)
        delete(hscore)
    end
    
end

chk = -1;