#include <stdio.h>
#include <locale.h>
typedef struct
{
char * name;
int age;
double salary;
} employee;
int main(void)
{
char *locale = setlocale(LC_ALL, "");
employee Victor = {"Виктор",99,999999999999999.1};
employee Lena = {"Лена",18 ,0000000000000.1};
printf("Имя: %s\t Возраст: %d\tЗарплата: %.1f\n",Victor.name, Victor.age, Victor.salary);
printf("Имя: %s\t Возраст: %d\tЗарплата: %.1f\n",Lena.name, Lena.age, Lena.salary);
return 0;
}
