#include<stdio.h>
int main(){
    int a,b,rem;
    printf("enter the number of toffees :");
    scanf("%d",&a);
    printf("enter the number of students :");
    scanf("%d",&b);
    rem = a % b;
    if(rem==0)
    {
        printf("no need to add any toffees");
    }
    else
    {
        printf("Remaning Toffees is :-> %d",rem);
        printf("\nTo be added is :-> %d",b-rem);
    }
    return 0;
}