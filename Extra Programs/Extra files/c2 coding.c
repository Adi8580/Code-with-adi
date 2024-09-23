#include<stdio.h>
void main()
{
    float sp1,sp2,sp3,sp4,sp5,cp,total;
    float percent;
    printf("Enter Cost Price Price : ");
    scanf("%f",&cp);
    printf("Enter Selling Price : ");
    scanf("%f",&sp1);
    printf("Enter Selling Price : ");
    scanf("%f",&sp2);
    printf("Enter Selling Price : ");
    scanf("%f",&sp3);
    printf("Enter Selling Price : ");
    scanf("%f",&sp4);
    printf("Enter Selling Price : ");
    scanf("%f",&sp5);
    total=sp1+sp2+sp3+sp4+sp5;
    percent=(total*100)/(cp*5);
    printf("%.2f Percent",percent-100);
    
}