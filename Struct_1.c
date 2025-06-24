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
employee Victor = {"Виктор",9999999,999999999999999.1};
printf("Имя: %s\t Возраст: %d\tЗарплата: %.1f\n",Victor.name, Victor.age, Victor.salary);
return 0;
}
