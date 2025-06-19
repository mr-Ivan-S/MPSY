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

ПОРАЗРЯДНЫЕ ОПЕРАЦИИ
#include <stdio.h>
#include <locale.h>
  
int main(void)
{
char *locale = setlocale(LC_ALL, "");
unsigned char A = 0b1101; 
unsigned char bit_1 = (A >> 1) & 1;
unsigned char bit_2 = (A >> 2) & 1;
unsigned char B = bit_1 ^ bit_2;
unsigned char C = A ^ (B << 1 | B << 2);
printf("A = %d\nИтого: %d", A,C);
return 0;
}

ОПЕРАЦИИ ПРИСВАИВАНИЯ
#include <stdio.h>
int main(void)
{
int A,B,C;
A=5;
B=2;
C=A;
A=B;
B=C;
printf("A = %i\nB = %i\nC = %i",A,B,C);
int D,E;
D=5;
E=2;
D=D+E;
E=D-E;
D=D-E;
printf("D = %i\nE = %i\n",D,E);
int F,G;
F=5;
G=2;
G = F ^ G;
F = F ^ G;
G = F ^ G;
printf("F = %i\nG = %i\n",F,G);
int H,I;
H = 5;
I = 2;
H = H+I-(H=I);
printf("H = %i\nI = %i\n",H,I);
return 0;
}

УСЛОВНЫЕ КОНСТРУКЦИИ
Упражнение 1
#include <stdio.h>
#include <locale.h> 
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=1, B=2;
if(A==B) printf("Equal %i=%i", A,B);
else printf("Not Equal %i<>%i", A,B);
return 0;
}
