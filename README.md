ПЕРЕМЕННЫЕ И ТИПЫ ДАННЫХ:
АРИФМЕТИЧЕСКИЕ ОПЕРАЦИИ:S_1, S_2, S_3, S_4, S_5, S_6;
ПОРАЗРЯДНЫЕ ОПЕРАЦИИ:PR;
ОПЕРАЦИИ ПРИСВАИВАНИЯ:Pris;
УСЛОВНЫЕ КОНСТРУКЦИИ:IF_1, IF_2, IF_3, IF_4, IF_5;
ЦИКЛЫ: For_1, For_2, For_3, For_4;
МАССИВЫ: Mass_1, Mass_2, Mass_3, Mass_4;
ВВОД С КОНСОЛИ: Vvod_1, Vvod_2, Vvod_3, Vvod_4, Vvod_5;
УКАЗАТЕЛИ: Ukaz_1,












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

Упражнение 2
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=3;
if(A>4 & A<14) printf("%i В диапазоне (4..14)",A);
else printf("%i Вне диапазона (4..14)",A);
return 0;
}

Упражнение 3
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=4;
if(A>=4 & A<=14) printf("%i В диапазоне (4..14)",A);
else printf("%i Вне диапазона (4..14)",A);
return 0;
}

Упражнение 4
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=5;
switch(A)
{
case 4:
printf("А = 4");
break;
case 5:
printf("А = 5");
break;
case 6:
printf("А = 6");
break;
default:
printf("А не принадлежит (4,5,6)");
break;
}
return 0;
}

Упражнение 5
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

ЦИКЛЫ
Упражнение 1
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=1, B=5;
for ( ;A<=B; )
{
printf("A = %i, Hello Work\n", A);
A++;
}
int C=5;
while(C>0)
{
printf("С=%i, Hello Work №2\n", C);
C--;
}
return 0;
}

Упражнение 2
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=11, B=20;
if(A%2==0) A++;
for ( ;A % 2==1 & A<B;)
{
printf("A = %i\n", A);
A+=2;
}
return 0;
}

Упражнение 3
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A = 7;
for(int B = 0; B < A;  B++)
{
for(int C = 0; C < A; C++)
{
if(C==B || C == A-B-1) printf("*");
else printf(" ");
}
printf("\n");
}
return 0;
}

Упражнение 4
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A = 7;
for(int B = 0; B < A;  B++)
{
for(int C = 0; C < A; C++)
{
if(B==0 || B ==A-1  || C ==B || C==A-B-1) printf("*");
else printf(" ");
}
printf("\n");
}
return 0;
}

МАССИВЫ
Упражнение 1
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char A[]={'А','Б','В','Г','\0'};
printf("А: %s\n",A);
char B[] = "АБВГ";
printf("B: %s \n", B);
return 0;
}

Упражнение 2
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
printf("А[%d] = %d\n",D, A[D]);
}
return 0;
}

Упражнение 3
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
printf("А[%d] = %d\n",D, A[D]);
}
return 0;
}

Упражнение 4
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

ВВОД С КОНСОЛИ
Упражнение 1
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A,B;
double C;
printf("Введите A B C (C - через запятую)\n");
scanf("%d %d %lf",&A,&B,&C);
printf("A = %i; B = %i; C=%.2lf\n",A,B,C);
return 0;
}

Упражнение 2
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A;
double C;
char B[30];
printf("Введите A C (C - через запятую)\n");
if(fgets(B,30,stdin) !=NULL)
{
sscanf(B, "%d %lf", &A,&C);
printf("A = %d; C=%.2lf\n",A,C);
}
else
{
printf("Ошибка\n");
}
return 0;
}

Упражнение 3 (!не нашел локализацию ввода имени в массив => символы при выводе)
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char A[20];
printf("Введите ФИО (лат., формат-Donald Trump): ");
scanf("%20[^\n]", A);
int B;
printf("Введите Возраст: ");
scanf("%d",&B);
printf("ФИО: %s \n",A);
printf("Возраст: %d",B);
return 0;
}

Упражнение 4
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float A,B;
float S;
printf("Введите стороны прямоугольника через пробел:");
scanf("%f %f", &A, &B);
S=A*B;
printf("Площадь прямоугольника: %.3f",S);
return 0;
}

Упражнение 5
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
float A;
float B;
printf("Введите размер в фут.:");
scanf("%f", &A);
B=A/3.281;
printf("Размер в метрах:%.3f",B);
return 0;
}

УКАЗАТЕЛИ
Упражнение 1
#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
int A=10;
int *B;
B=&A;
printf("Адрес переменной (в 16-системе): %p\n",(void*) B);
printf("Переменная = %d\n",*B);
return 0;
}
