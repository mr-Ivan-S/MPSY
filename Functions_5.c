#include <stdio.h>
#include <locale.h>
void x2(int, int);
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int X,Y;
printf("¬ведите X: ");
scanf("%d",&X);
printf("¬ведите Y: ");
scanf("%d",&Y);
x2(X,Y);
return 0;
}

void x2(int X, int Y)
{
if(X>Y)
{
printf("X-Y = %d\n",X-Y);
}
else if(X<Y)
{
printf("X+Y = %d\n",X+Y);
}
else if(X=Y)
{
printf("X=Y = %d\n",X);
}
}