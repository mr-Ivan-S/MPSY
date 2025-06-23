#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
const long A=10;
const long *B=&A;
char *const C = "Привет";
printf("Константа по указателю = %ld\n",*B);
printf("Надпись строки: %s\n", C);
return 0;
}