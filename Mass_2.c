#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A[]={1,2,3,4};
size_t B = sizeof(A)/sizeof(A[0]);
A[0]=A[0]*2;
A[3]=A[3]*2;
for(size_t D = 0; D < B; D++)
{
printf("À[%d] = %d\n",D, A[D]);
}
return 0;
}