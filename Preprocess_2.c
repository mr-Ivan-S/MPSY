#include <stdio.h>
#include <locale.h>
#define MAX(a,b) (a>b ? a:b)
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float x, y;
printf("Введите первое число:");
scanf("%f",&x);
printf("Введите второе число:");
scanf("%f",&y);
float c = MAX(x,y);
printf("Максимум: %.1f\n",c);
#undef MAX
return 0;
}
