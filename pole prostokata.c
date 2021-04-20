#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
for(;;)
{
int c=68 ;
float a, b, h, wynik, pods, wynik2;

    printf("wybierz operacje\n");
    printf("1.pole prostokata\n");
    printf("2.pole trojkata\n");
    printf("3. wyjscie\n");
    scanf("%d", &c);
switch (c)


{

case 1:

    printf("wprowadz dlugosc boku a\n");
    scanf("%f", &a);
    printf("wprowadz dlugosc boku b\n");
    scanf("%f", &b);
    wynik = a*b ;
    printf("wynik=" "%f\n", wynik);

    break;
case 2:

    printf("wprowadz dlugosc podstawy\n");
    scanf("%f", &pods);
    printf("pods=" , pods);
    printf("wprowadz dlugosc wysokosci");
    scanf("%f", &h);
    wynik2 = pods*h / 2 ;
    printf("wynik=" "%f\n", wynik2);
    break;
case 3:
   return 0;
default:
  printf("Zly wybor\n");
}


}
    return 0;

}
