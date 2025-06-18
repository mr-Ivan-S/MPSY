#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float A = 10;
float B = 3;
float C = A/B;
printf("A = %f\nB = %f\nA/B = %4.3f\n",A,B,C);
return 0;
}