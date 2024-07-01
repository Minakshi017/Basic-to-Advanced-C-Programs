#include<stdio.h>
int main()
{
    float area,hight,breadth;
    printf("Enter value of triangle");
    scanf("%f %f", &breadth,&hight);

    area = 0.5 * breadth * hight;

    printf("/n area of triangle %f", area);
   
}