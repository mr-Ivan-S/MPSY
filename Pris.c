#include <stdio.h>
int main(void)
{
int A,B,C;
A=5;
B=2;
C=A;
A=B;
B=C;
printf("A = %i\nB = %i\nC = %i",A,B,C);
int D,E;
D=5;
E=2;
D=D+E;
E=D-E;
D=D-E;
printf("D = %i\nE = %i\n",D,E);
int F,G;
F=5;
G=2;
G = F ^ G;
F = F ^ G;
G = F ^ G;
printf("F = %i\nG = %i\n",F,G);
int H,I;
H = 5;
I = 2;
H = H+I-(H=I);
printf("H = %i\nI = %i\n",H,I);
return 0;
}