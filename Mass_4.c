#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A[]={1,2,3,4,5};
int B = sizeof(A)/sizeof(A[0]);
int C=B/2;
for(int D = 0; D < C; D++)
{
int E = A[D];
A[D]=A[B-D-1];
A[B-D-1]=E;
}
for(int D=0; D<B; D++)
{
printf("%d", A[D]);
}
return 0;
}