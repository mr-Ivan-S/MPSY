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
printf("Красный");
break;
case GREEN:
printf("Зелёный");
break; 
case BLUE:
printf("Синий");
break;
default:
printf("Ошибка");
break;
}
return 0;
}
