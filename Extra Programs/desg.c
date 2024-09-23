#include<stdio.h>

int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>18);
    {
        printf("You can vote");
    }
    else
    {
        printf("You can not vote");
    }
   //printf("age is %d",age);
    return 0;
}