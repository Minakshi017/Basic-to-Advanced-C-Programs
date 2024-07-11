#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){

    int b, p, r;
    printf("\n enter base, power");
    scanf("%d%d", &b, &p);

    r = pow(b,p);

    printf("\n %d power of%d is %d", b, p, r);

    return 0;

}