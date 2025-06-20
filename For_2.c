#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=11, B=20;
if(A%2==0) A++;
for ( ;A % 2==1 & A<B;)
{
printf("A = %i\n", A);
A+=2;
}
return 0;
}