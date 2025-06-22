#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float A,B;
float S;
printf("Введите стороны прямоугольника через пробел:");
scanf("%f %f", &A, &B);
S=A*B;
printf("Площадь прямоугольника: %.3f",S);
return 0;
}


