#include <stdio.h>
#include <locale.h>
void Plus_5(int);
int main(void)
{
char *locale = setlocale(LC_ALL, "");
Plus_5(1);
Plus_5(2);
return 0;
}
void Plus_5(int X)
{
X=X+5;
printf("Итого: %d\n",X);
}