#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A[]={3, 4, 5, 6, 7};
int *B=A;
B=B+2;
printf("������ �������: %d\n",*B);
B=B+1;
printf("��������� �������: %d\n",*B);
return 0;
}