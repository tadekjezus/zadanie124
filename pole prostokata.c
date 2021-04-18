#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a;
    float b;
    float pole_prostokata;

    printf ("podaj dlugosc boku a: ");
    scanf ("%f", &a);

    printf ("podaj dlugosc boku b: ");
    scanf ("%f", &b);


    pole_prostokata = a * b;
    printf ("pole_prostokata: %f", pole_prostokata);

    return 0;
}
