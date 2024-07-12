#include<stdio.h>
#include<conio.h>

int main(){
    float f, c;
    printf("\n Enter tem in fahrenight");
    scanf("%f", &f);

    c = (f - 32) * 5.0/9.0;

    printf("\n tem in c is %f ", c);
    return 0;
    

}