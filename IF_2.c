#include <stdio.h>
#include <locale.h>
  
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=3;
if(A>4 & A<14) printf("%i В диапазоне (4..14)",A);
else printf("%i Вне диапазона (4..14)",A);
return 0;
}