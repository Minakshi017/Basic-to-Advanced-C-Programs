#include<stdio.h>
#include<conio.h>

int main(){
    int n, i;
    printf("\n print value of n");
    scanf("%d", &n);

    printf("\n print even number from 1 to %d\n ", n);

    for(i = 1; i<= n; i++){
        i % 2 ==0 ?

        printf("%d\n",i):printf(" ");
    }
    return 0;
}