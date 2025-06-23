#include <stdio.h>
#include <locale.h>

void print_person(char* name, int age)
{
printf("Имя: %s \t Возраст: %d \n", name, age);
}
void print_product(char* title, int price)
{
printf("Товар: %s \t Цена: %d \n", title, price);
}

int main(void)
{
char *locale = setlocale(LC_ALL, "");
void (*Check) (char*, int);
Check=print_person;
Check("Сэм", 99);
Check=print_product;
Check("Молоко", 100);
return 0;
}
