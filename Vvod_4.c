#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float A,B;
float S;
printf("������� ������� �������������� ����� ������:");
scanf("%f %f", &A, &B);
S=A*B;
printf("������� ��������������: %.3f",S);
return 0;
}


