#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A,B;
double C;
printf("������� A B C (C - ����� �������)\n");
scanf("%d %d %lf",&A,&B,&C);
printf("A = %i; B = %i; C=%.2lf\n",A,B,C);
return 0;
}