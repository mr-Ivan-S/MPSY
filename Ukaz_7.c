#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char *A[]={"���","���","���"};
int B=0; int C=1;
for(;B<3;)
{
printf("��� � %d: %s\n",C, A[B]);
B++;
C++;
}
return 0;
}