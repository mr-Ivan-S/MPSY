#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=5;
switch(A)
{
case 4:
printf("� = 4");
break;
case 5:
printf("� = 5");
break;
case 6:
printf("� = 6");
break;
default:
printf("� �� ����������� (4,5,6)");
break;
}

return 0;
}