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
employee Victor = {"������",99,999999999999999.1};
employee Lena = {"����",18 ,0000000000000.1};
printf("���: %s\t �������: %d\t��������: %.1f\n",Victor.name, Victor.age, Victor.salary);
printf("���: %s\t �������: %d\t��������: %.1f\n",Lena.name, Lena.age, Lena.salary);
return 0;
}
