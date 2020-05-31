clc


global Ln Hn Vn velSig  % Settori Discretizzati
Ln = 6;                 % Numero divisioni in X
Hn = 8;                 % Numero divisioni in Y
Vn = 1;                 % Distanza tra 2 coordinate della barra
velSig = 5;             % 1 = neg, 2 = ~0 , 3 = pos

global L H V
L = 10;                 % profondità del campo
H = 8;                  % altezza del campo
V = [1:Vn:H-1];

% X1(Xball)  = Xpalla
% X2(Yball)  = Ypalla
% X3(Ybarr)  = ybarra
% X4(VxBall) = 1 = neg, 2 = ~0 , 3 = pos
% X5(VyBall) = 1 = neg, 2 = ~0 , 3 = pos
% Indici i in base a Ln, Hn e Vn che indicano il livello di
% discretizzazione

% id1=idCenter(2,2,2,1,2);
% [i1,i2,i3,i4,i5] = centerId(id1);
% fprintf("%.1f-->(%.1f, %.1f, %.1f, %.1f, %.1f)\n",id1,i1,i2,i3,i4,i5);

for i=1:(velSig^2*length(V)*Hn*Ln)
    
    [i1,i2,i3,i4,i5] = centerId(i);
    id=idCenter(i1,i2,i3,i4,i5);
    if i~=id
        fprintf("Ha fallito all'indice %d, pensava fosse %d\n",i,id);
    end
    
end

fprintf("Finish\n")

for i1=1:Ln
    for i2=1:Hn
        for i3=1:length(V)
            for i4=1:velSig
                for i5=1:velSig
                    id=idCenter(i1,i2,i3,i4,i5);
                    [j1,j2,j3,j4,j5] = centerId(id);
                    if((i1~=j1)||(i2~=j2)||(i3~=j3)||(i4~=j4)||(i5~=j5))
                        fprintf("(%.1f, %.1f, %.1f, %.1f, %.1f)-->%.1f\n",i1,i2,i3,i4,i5,id);
                        fprintf("Ma %.1f-->(%.1f, %.1f, %.1f, %.1f, %.1f)\n",id,j1,j2,j3,j4,j5);
                    end
                end
            end
        end
    end
end

fprintf("Finish2\n")

id=idCenter(Ln,Hn,length(V),velSig,velSig);
[i1,i2,i3,i4,i5] = centerId(velSig^2*length(V)*Hn*Ln);
fprintf("C'è l'errore nei valori limite\n");

id=idCenter(Ln+1,Hn,length(V),velSig,velSig);
[i1,i2,i3,i4,i5] = centerId((velSig^2*length(V)*Hn*Ln)+1);
fprintf("Errore causato da un eccesso del limite\n");

function [id] = idCenter(i1,i2,i3,i4,i5)
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

function [i1,i2,i3,i4,i5] = centerId(id)
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