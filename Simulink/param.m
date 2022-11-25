close all;
clear;
clc;

n = 16;

a = 0.445;
L = 0.46;
r = 0.125;

M = 90;
mg = 1.5;
mc = 1;
rc = 0.08;
I = 8.53;
alfa = 30*((2*pi)/360);
mu = 80;
g = 9.8;

startLoc = [2 2];
goalLoc = [2 8];
load vid_map.mat
