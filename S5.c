#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A = 10;
int B = 4;
int C = A%B;
printf("A = %i\nB = %i\nОстаток = %i\n",A,B,C);
return 0;
}