#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A[] = {4, 24, 15, 65, 3};
int *x=A;
int i=0;
for(;x<&A[4];)
{
printf("Элемент № %d\tЗначение = %d\n",i,*x);
x++; 
i++;
}
return 0;
}