#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char A[]={'�','�','�','�','\0'};
printf("�: %s\n",A);
char B[] = "����";
printf("B: %s \n", B);
return 0;
}