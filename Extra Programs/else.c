#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age > 25)
    {
        printf("age is greater than 25");
    }
    else if(age>15)
    {
        printf("age is greater than 15");
    }
    else if(age>8)
    {
        printf("age is greater than 8");
    }
    else
    {
        printf("age is less than 8");
    }
}