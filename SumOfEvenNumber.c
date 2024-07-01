#include <stdio.h>

int main() {
    //Write your code here
    int i,n, sum=0;
    printf("Enter value of n");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
      {
        if (i % 2 == 0)
          sum = sum + i;
      }
    }
    printf("sum of Even no. is :%d",sum);


    return 0;
}