#include <stdio.h>
#include <locale.h>
struct person
{
char * name;
int age;
};
int main(void)
{
char *locale = setlocale(LC_ALL, "");
struct person Victor = {"Виктор",99};
struct person *v_Victor = &Victor;
char * name = v_Victor->name;
int age = (*v_Victor).age;
printf("Имя: %s\t Возраст: %d\n",name,age);
v_Victor ->age = 18;
printf("Имя: %s\t Возраст: %d\n",Victor.name,Victor.age);
return 0;
}
