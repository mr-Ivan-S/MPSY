#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=5,B=4,C=6,Max;
if (A>B & A>C) Max = A;
else 
{
if (B>A & B>C) Max = B;
else
{ 
if (C>A & C>B) Max = C;
else printf("Max нет");
}
}
printf("Max = %i\n",Max);
return 0;
}