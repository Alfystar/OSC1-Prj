clear variables
clc

len = 16;

%%
tG_vet_full = zeros(1,len);
tW_vet_full = zeros(1,len);
tRBFint_vet_full = zeros(1,len);
tplot_vet_full = zeros(1,len);

% Test algoritmo Full al crescere dei centri
for i = 1 : len
    %     figure(i);
    fprintf("\n#########\nn°center use: %d\n",i);
    [tG_vet_full(i), tW_vet_full(i), tRBFint_vet_full(i), tplot_vet_full(i)] = interpolateMain(i,0.5, 0.5, "full");
    
end
%%
figure(1)
interpolateMain(16,0.5, 1, "full");

%%

tG_vet_speed = zeros(1,len);
tW_vet_speed = zeros(1,len);
tRBFint_vet_speed = zeros(1,len);
tplot_vet_speed = zeros(1,len);

% Test algoritmo speed al crescere dei centri
for i = 1 : len
    %     figure(i);
    fprintf("\n#########\nn°center use: %d\n",i);
    [tG_vet_speed(i), tW_vet_speed(i), tRBFint_vet_speed(i), tplot_vet_speed(i)] = interpolateMain(i,0.5, 0.5, "speed");
    
end
%%
figure(1)
interpolateMain(16,0.5, 1, "speed");

%%
tG_vet_wTrunc = zeros(1,len);
tW_vet_wTrunc= zeros(1,len);
tRBFint_vet_wTrunc= zeros(1,len);
tplot_vet_wTrunc= zeros(1,len);

% Test algoritmo trunk al crescere dei centri

for i = 1 : len
    %     figure(i);
    fprintf("\n#########\nn°center use: %d\n",i);
    [tG_vet_wTrunc(i), tW_vet_wTrunc(i), tRBFint_vet_wTrunc(i), tplot_vet_wTrunc(i)] = interpolateMain(i,0.5, 0.5, "trunc");
    
end

%%
figure(1)
interpolateMain(16,0.5, 1, "trunc");
%% Grafici temporali di comparazione
figure(len+1)
clf
plot(tG_vet_full,'g');
hold on
grid on
plot(tG_vet_speed,'g--');
plot(tG_vet_wTrunc,'g:');

plot(tW_vet_full,'r');
plot(tW_vet_speed,'r--');
plot(tW_vet_wTrunc,'r:');

plot(tRBFint_vet_full,'b');
plot(tRBFint_vet_speed,'b--');
plot(tRBFint_vet_wTrunc,'b:');

legend("tG full","tG speed","tG trunc","tW full","tW speed","tW trunc","tRBFint full","tRBFint speed","tRBFint trunk");

%%

figure(len+2)
clf
semilogy(tG_vet_full,'g');
hold on
grid on
semilogy(tG_vet_speed,'g--');
semilogy(tG_vet_wTrunc,'g:');

semilogy(tW_vet_full,'r');
semilogy(tW_vet_speed,'r--');
semilogy(tW_vet_wTrunc,'r:');

semilogy(tRBFint_vet_full,'b');
semilogy(tRBFint_vet_speed,'b--');
semilogy(tRBFint_vet_wTrunc,'b:');

legend("tG full","tG speed","tG trunc","tW full","tW speed","tW trunc","tRBFint full","tRBFint speed","tRBFint trunk");

%% 

figure(len+3)
clf
hold on
grid on

plot(tRBFint_vet_full,'b');
plot(tRBFint_vet_speed,'b--');
plot(tRBFint_vet_wTrunc,'b:');
xlim([1,len]);
xlabel("n° center per edge");
ylabel("secs");

legend("tRBFint full","tRBFint speed","tRBFint trunk");




