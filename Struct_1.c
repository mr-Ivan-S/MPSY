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
employee Victor = {"������",9999999,999999999999999.1};
printf("���: %s\t �������: %d\t��������: %.1f\n",Victor.name, Victor.age, Victor.salary);
return 0;
}
