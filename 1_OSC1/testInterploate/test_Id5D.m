clc


global Ln Hn Vn velSig  % Settori Discretizzati
Ln = 2;%3                 % Numero divisioni in X
Hn = 2;%3                 % Numero divisioni in Y
Vn = 1;                 % Distanza tra 2 coordinate della barra
velSig = 2;%3;             % 1 = neg, 2 = ~0 , 3 = pos

global L H V
L = 10;                 % profondità del campo
H = 8;                  % altezza del campo
V = [0,1];%1:Vn:H-1;

% X1(Xball)  = Xpalla 
% X2(Yball)  = Ypalla 
% X3(Ybarr)  = ybarra
% X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos
% X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos
% Indici i in base a Ln, Hn e Vn che indicano il livello di
% discretizzazione

a=0
a+5

function [id] = idCenter(i1,i2,i3,i4,i5)
global Ln Hn V velSig;

    id = i5 + velSig * ((i4-1) + velSig * ((i3-1)+length(V) * ((i2-1) + Hn * (i1-1))));
    
end

function [i1,i2,i3,i4,i5] = centerId(id)
global Ln Hn V velSig;
    
    i5 = mod(id,velSig);
%     Perchè vado da 1 a n e non da 0 a n-1!!!! (matlab antipatico!!)
    if(i5 == 0)
        i5 = velSig;
    end
    i4 = mod((id - i5)/velSig,velSig);
    if(i4 == 0)
        i4 = velSig;
    end
        i3 = mod((id - i5)/velSig,velSig)+1;
    if(i4 == 0)
        i4 = velSig;
    end

%     fprintf("index = %d, i1 = %d, i2 = %d\n",index,i1,i2);
    
end