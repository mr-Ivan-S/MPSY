#include <stdio.h>
#include <locale.h>
#define N 22
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int x=10;
x=N;
printf("число: %d\n",x);
#undef N
x=11;
printf("число после undef: %d",x);
return 0;
}
