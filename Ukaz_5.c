#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char *A = "����";
printf("%s\n",A);
return 0;
}