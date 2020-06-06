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