#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A;
double C;
char B[30];
printf("������� A C (C - ����� �������)\n");
if(fgets(B,30,stdin) !=NULL)
{
sscanf(B, "%d %lf", &A,&C);
printf("A = %d; C=%.2lf\n",A,C);
}
else
{
printf("������\n");
}
return 0;
}