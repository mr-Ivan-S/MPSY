#include <stdio.h>
#include <locale.h>
typedef enum
{
RED,
GREEN,
BLUE
} color;
int main(void)
{
char *locale = setlocale(LC_ALL, "");
color vx = RED;
switch(vx)
{
case RED:
printf("�������");
break;
case GREEN:
printf("������");
break; 
case BLUE:
printf("�����");
break;
default:
printf("������");
break;
}
return 0;
}
