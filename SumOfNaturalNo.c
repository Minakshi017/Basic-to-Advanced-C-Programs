#include<stdio.h>
#include<conio.h>
int main(){
    int i, n, s = 0;
    printf("/n enter value of n");
    scanf("%d", &n);

    for(i= 0; i<= n; i++){
        s = s+i;
    }
    printf("/n sum of first %d natural number is %d", n,s);
    return 0;

}