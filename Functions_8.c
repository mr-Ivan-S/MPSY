#include <stdio.h>
#include <locale.h>
void change(int, int);
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int X,Y;
printf("¬ведите X: ");
scanf("%d",&X);
printf("¬ведите Y: ");
scanf("%d",&Y);
change(X,Y);
return 0;
}

void change(int E, int F)
{
int G=E;
E = F;
F = G;
printf("X=%d\nY=%d",E,F);
}