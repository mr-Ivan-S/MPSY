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
struct person Victor = {"������",99};
struct person *v_Victor = &Victor;
char * name = v_Victor->name;
int age = (*v_Victor).age;
printf("���: %s\t �������: %d\n",name,age);
v_Victor ->age = 18;
printf("���: %s\t �������: %d\n",Victor.name,Victor.age);
return 0;
}
