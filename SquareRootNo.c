#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    float sr, n;
    printf("\n enter value of n");
    scanf("%f", &n);

    sr = sqrt(n);

    printf("\n square root of number %f is %f", n, sr);
    return 0;
}