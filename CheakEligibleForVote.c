#include<stdio.h>
#include<conio.h>

int main(){
    int age;
    printf("/n Enter your age");
    scanf("%d", &age);

    while(age>= 18){
        printf("/n you are eligible for vote", age);

    }
    return 0;
}