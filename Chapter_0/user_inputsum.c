#include<stdio.h>
int main()
{
    int d1,d2,area;
    printf("Enter Diagonal 1 and Diagonal 2 :");
    scanf("%d %d",&d1,&d2);
    area=(d1*d2)/2;
    printf("Area of Rhombus is %d",area);
}