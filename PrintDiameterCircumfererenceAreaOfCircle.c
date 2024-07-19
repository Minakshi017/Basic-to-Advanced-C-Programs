#include<stdio.h>
#include<conio.h>

void main(){
    float a, r, c, d, pi=3.142;
    printf("\n enter radius of Circle");
    scanf("%f",&r);

    d = 2 * r;
    c = 2 * pi * r;
    a = pi * r * r;

    printf("\n raduis : %f  diameter: %f  circumference: %f area: %f", r, d, c, a);
    return 0;
}
