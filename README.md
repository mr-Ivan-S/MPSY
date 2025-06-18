ПЕРЕМЕННЫЕ И ТИПЫ ДАННЫХ
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

АРИФМЕТИЧЕСКИЕ ОПЕРАЦИИ
Упражнение 1
#include <stdio.h>
int main(void)
{
int A = 10;
int B = 5;
int C = A+B;
printf("A = %i\nB = %i\nA+B = %i",A,B,C);
return 0;
}

Упражнение 2
#include <stdio.h>
int main(void)
{
int A = 10;
int B = 4;
int C = A/B;
printf("A = %i\nB = %i\nA/B = %i",A,B,C);
return 0;
}

Упражнение 3
#include <stdio.h>
int main(void)
{
int A = 10;
int B = 4;
float C = (double)A/(double)B;
printf("A = %i\nB = %i\nA/B = %f",A,B,C);
return 0;
}

Упражнение 4
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

Упражнение 5
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A = 10;
int B = 4;
int C = A%B;
printf("A = %i\nB = %i\nОстаток = %i\n",A,B,C);
return 0;
}

Упражнение 6
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
