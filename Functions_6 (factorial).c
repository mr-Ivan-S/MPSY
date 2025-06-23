#include <stdio.h>
#include <locale.h>
void fact(int);
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int X;
printf("¬ведите X: ");
scanf("%d",&X);
fact(X);
return 0;
}

void fact(int X)
{
int Y = 1;
for(int i=1; i<=X; i++)
{
Y *= i;
}
printf("X!=%d\n",Y);
}