#include <stdio.h>
#include <locale.h>
  
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=1, B=2;
if(A==B) printf("Equal %i=%i", A,B);
else printf("Not Equal %i<>%i", A,B);
return 0;
}