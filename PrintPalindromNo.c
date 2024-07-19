#include<stdio.h>
#include<conio.h>

int main(){
    int n, c, r, s=0;
    printf("\n Enter value of n");
    scanf("%d", &n);
    c = n;
    while (n > 0)
    {
       r = n % 10;
       s = r +(s * 10);
       n = n/10;
    }
    if(c == s){
        printf("\n number is palindrom");
    }else{
        printf("\n number is not palindrom");
    }

    return 0;
    
}