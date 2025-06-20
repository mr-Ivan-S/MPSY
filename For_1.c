#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=1, B=5;
for ( ;A<=B; )
{
printf("A = %i, Hello Work\n", A);
A++;
}
int C=5;
while(C>0)
{
printf("Ñ=%i, Hello Work ¹2\n", C);
C--;
}
return 0;
}