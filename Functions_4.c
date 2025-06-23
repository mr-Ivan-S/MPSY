#include <stdio.h>
#include <locale.h>
void x2(const int);
int main(void)
{
char *locale = setlocale(LC_ALL, "");
x2(1);
x2(2);
return 0;
}
void x2(const int X)
{
printf("Итого: %d\n",X*2);
}