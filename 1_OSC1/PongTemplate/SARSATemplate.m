close all
clear all
clc

global L H 

L = 8;                  % profondità del campo
H = 8;                  % altezza del campo

chk = -1;
xRnd = rand; yRnd = rand; bRnd = rand;
xb0 = L*xRnd; yb0 = H*yRnd; yp0 = (H-1)*bRnd+1;     % condizioni iniziali casuali

while chk == -1
    chk = PongTemplate(xb0,yb0,yp0);
    xRnd = rand; yRnd = rand; bRnd = rand;
    xb0 = L*xRnd; yb0 = H*yRnd; yp0 = (H-1)*bRnd+1;
end