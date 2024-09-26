#include<stdio.h>

int main(){
    int marks1 , marks2, marks3;
    printf("Enter marks1 :\n->");
    scanf("%d",&marks1);
    printf("Enter marks2 :\n->");
    scanf("%d",&marks2);
    printf("Enter marks3 :\n->");
    scanf("%d",&marks3);
    printf("your marks in individual stujects is %d %d and %d\n",marks1,marks2,marks3);

    printf("Your percentage is %d\n",(marks1 + marks2 + marks3)/3);

    if(marks1<33 || marks2<33 || marks3<33)//If any of the marks is less than 33 then you are fail
    {
        printf("You are failed in individual subject");
    }
    else if((marks1 +  marks2 + marks3)/3 < 40)//For percentage and if you got less than 40% then you are fail
    {
        printf("You are failed due to less percentage");
    }
    else
    {
        printf("You are passed");
    }
    return 0;
}