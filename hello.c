#include <stdio.h>
#include <locale.h>

int main(void)
{
char *locale = setlocale(LC_ALL, "");

printf("Hello World\nHello C\n������\n");
return 0;
}