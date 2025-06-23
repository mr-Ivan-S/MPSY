#include <stdio.h>
#include <locale.h>
void hello_world(void);
int main(void)
{
char *locale = setlocale(LC_ALL, "");
hello_world();
hello_world();
return 0;
}
void hello_world()
{
printf("Привет, Мир!\n");
}