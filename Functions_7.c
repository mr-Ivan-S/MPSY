#include <stdio.h>
#include <locale.h>
 
void print(char text[])
{
printf(text);
}
 
int main(void)
{
char *locale = setlocale(LC_ALL, "");
print("Привет \n");
print("Пока \n");
return 0;
}
