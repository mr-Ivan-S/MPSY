#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char A[20];
printf("Введите ФИО (лат., формат-Donald Trump): ");
scanf("%20[^\n]", A);
int B;
printf("Введите Возраст: ");
scanf("%d",&B);
printf("ФИО: %s \n",A);
printf("Возраст: %d",B);
return 0;
}


