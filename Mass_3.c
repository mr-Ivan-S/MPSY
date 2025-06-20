#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A[]={1,2,3,4};
size_t B = sizeof(A)/sizeof(A[0]);
for(size_t D = 0; D < B; D++)
{
A[D]=A[D]*2;
printf("À[%d] = %d\n",D, A[D]);
}
return 0;
}