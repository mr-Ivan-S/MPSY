#include <stdio.h>
#include <locale.h>
int main(void)
{
char *locale = setlocale(LC_ALL, "");
char A[]={'À','Á','Â','Ã','\0'};
printf("À: %s\n",A);
char B[] = "ÀÁÂÃ";
printf("B: %s \n", B);
return 0;
}