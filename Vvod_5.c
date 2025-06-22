#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float A;
float B;
printf("Введите размер в фут.:");
scanf("%f", &A);
B=A/3.281;
printf("Размер в метрах:%.3f",B);
return 0;
}


