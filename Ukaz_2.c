#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=10;
int *B=&A;
printf("�������� ���������� = %d\n",*B);
*B=20;
printf("���������� = %d\n",*B);
return 0;
}