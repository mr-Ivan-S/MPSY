#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=10;
int *B;
B=&A;
printf("����� ���������� (� 16-�������): %p\n",(void*) B);
printf("���������� = %d\n",*B);
return 0;
}