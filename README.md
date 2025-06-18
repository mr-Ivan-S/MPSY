Упражнение 1 
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
printf("Hello World\nHello C\nПривет\n");
return 0;
}

Упражнение 2 
#include <stdio.h>
int main(void)
{
int A=-1;
char B;
float C=99.999;
Double D;
printf("Int = %i\nChar = %c\nFloat = %f\nDouble = %f",A,B,C,D);
return 0;
}

Упражнение 3
#include <stdio.h>
int main(void)
{
int A = 10;
char B = 'F';
float C = 3.14;
double D = 3.14159;
printf("Int = %i\nChar = %c\nFloat = %f\nDouble = %f",A,B,C,D);
return 0;
}

Упражнение 4 - см. Упражнение 3
