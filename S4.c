#include <stdio.h>
int main(void)
{
int A = 10;
int B = 5;
float C = (double)A+(double)B;
float D = C/2.0;
printf("A = %i\nB = %i\nA+B = %f\n(A+B)/2 = %f\n",A,B,C,D);
return 0;
}