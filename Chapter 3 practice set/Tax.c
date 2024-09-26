#include<stdio.h>

int main(){
    int income;
    int tax=0;
    printf("Enter your income: ");
    scanf("%d",&income);
    if(income<250000)
    {
        tax=0;
    }else if(income>250000 && income<=500000)
    {
        tax=0.05*(income-250000);
    }
    else if(income>500000 && income<=1000000)
    {
        tax=0.05*(500000-250000)+0.15*(income-250000);
    }
    else
    {
        tax=0.05*(500000-250000)+0.15*(1000000-500000)+0.30*(income-1000000);
    }
    printf("Your tax that you need to pay is : %d",tax);
    return 0;
}