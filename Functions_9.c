#include <stdio.h>
#include <locale.h>

void print_person(char* name, int age)
{
printf("���: %s \t �������: %d \n", name, age);
}
void print_product(char* title, int price)
{
printf("�����: %s \t ����: %d \n", title, price);
}

int main(void)
{
char *locale = setlocale(LC_ALL, "");
void (*Check) (char*, int);
Check=print_person;
Check("���", 99);
Check=print_product;
Check("������", 100);
return 0;
}
