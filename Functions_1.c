#include <stdio.h>
#include <locale.h>
void hello(void);
int main(void)
{
char *locale = setlocale(LC_ALL, "");
hello();
hello();
return 0;
}

void hello()
{
printf("Привет, Мир!\n");
}