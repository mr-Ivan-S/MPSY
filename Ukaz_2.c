#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=10;
int *B=&A;
printf("Исходная переменная = %d\n",*B);
*B=20;
printf("Переменная = %d\n",*B);
return 0;
}