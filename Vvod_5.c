#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float A;
float B;
printf("������� ������ � ���.:");
scanf("%f", &A);
B=A/3.281;
printf("������ � ������:%.3f",B);
return 0;
}


