#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=10;
int *B;
B=&A;
printf("Адрес переменной (в 16-системе): %p\n",(void*) B);
printf("Переменная = %d\n",*B);
return 0;
}