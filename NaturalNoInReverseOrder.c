#include<stdio.h>
#include<conio.h>

int main(){
    int n, i;
    printf("\n enter value of n");
    scanf("%d", &n);

    printf("\n print natural number from reverse order %d",n);

    for(i = n; i >= 1; i--){
        printf("%d/t", i);
    }
    return 0;
}