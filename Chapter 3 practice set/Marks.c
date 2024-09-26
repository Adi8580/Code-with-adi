#include<stdio.h>

int main(){
    int marks1 , marks2  , marks3 ;
    printf("Enter your marks1 :\n ");
    scanf("%d",&marks1);
    printf("Enter your marks2 :\n ");
    scanf("%d",&marks2);
    printf("Enter your marks3 :\n ");
    scanf("%d",&marks3);
    printf("Your marks is %d , %d , and %d\n", marks1,marks2,marks3);
    if(marks1<33 ||  marks2<33 || marks3<33)
    {
        printf("You are failed");
    }
    else if(marks1>33 ||  marks2>33 || marks3>33)
    {
        printf("You are passed");
    }
    return 0;
}