#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
for(;;)
{
int c=68 ;
float a, b, h, pole_prostokata, pole_trojkata;

    printf("wybierz operacje\n");
    printf("1.pole prostokata\n");
    printf("2.pole trojkata\n");
    printf("3. wyjscie\n");
    fflush (stdin);
    scanf("%d", &c);
switch (c)


{

case 1:

    printf("wprowadz dlugosc boku a\n");
    scanf("%f", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%f", &b);
    pole_prostokata = a*b ;
    printf("pole prostokata =" "%f\n", pole_prostokata);

    break;
case 2:

    printf("wprowadz podstawe a\n");
    scanf("%f", &a);
    printf("wprowadz wysokosc h\n");
    scanf("%f", &h);
    pole_trojkata = a * h / 2 ;
    printf("pole trojkata = " "%f\n", pole_trojkata);
    break;
case 3:
   return 0;
default:
  printf("Zly wybor\n");
}


}
    return 0;

}
