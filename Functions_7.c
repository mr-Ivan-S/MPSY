#include <stdio.h>
#include <locale.h>
 
void print(char text[])
{
printf(text);
}
 
int main(void)
{
char *locale = setlocale(LC_ALL, "");
print("������ \n");
print("���� \n");
return 0;
}
