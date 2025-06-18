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
printf("A = %d\nÈòîãî: %d", A,C);
return 0;
}