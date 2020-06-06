clear variables
close all
clc


load('1_RBF_Trunck_4_giugno.mat');
figure('Name','RBF evolution Data','NumberTitle','off');
statPrint(scorePlotmed,scorePlotFilter,rimbalziPlotmed,rimbalziPlotFilter)


load('2_RL_4_giugno.mat');
figure('Name','RL evolution Data','NumberTitle','off');
statPrint(scorePlotmed,scorePlotFilter,rimbalziPlotmed,rimbalziPlotFilter)





function [] = statPrint(scorePlotmed,scorePlotFilter,rimbalziPlotmed,rimbalziPlotFilter)
clf
subplot(1,2,1);
plot(scorePlotmed);
hold on
plot(scorePlotFilter,'g');
ylim([0,max(1.5,max(scorePlotFilter)*1.5)]);
xlim([0, length(scorePlotFilter)]);

grid on
legend("scorePlotmed");
title("Point Evolution")

subplot(1,2,2);
plot(rimbalziPlotmed);
hold on
plot(rimbalziPlotFilter,'g');
ylim([0,max(rimbalziPlotFilter)*1.5]);
xlim([0, length(rimbalziPlotFilter)]);

grid on
legend("rimbalziPlotmed");
title("Rimbalzi Evolution")
end