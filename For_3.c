#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A = 7;
for(int B = 0; B < A;  B++)
{
for(int C = 0; C < A; C++)
{
if(C==B || C == A-B-1) printf("*");
else printf(" ");
}
printf("\n");
}
return 0;
}