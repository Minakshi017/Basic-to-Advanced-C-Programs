#include<stdio.h>

void main(){
    float f,c;
    printf("Enter Temp in celsius");
    scanf("%f", &c);

    f = 1.8 * c + 32;

    printf("/n temp in fahrenheight is %f",f);
    return 0;
}