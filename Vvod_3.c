#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char A[20];
printf("������� ��� (���., ������-Donald Trump): ");
scanf("%20[^\n]", A);
int B;
printf("������� �������: ");
scanf("%d",&B);
printf("���: %s \n",A);
printf("�������: %d",B);
return 0;
}


