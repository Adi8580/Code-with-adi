#include<stdio.h>

int main(){
    int age;
    printf("Enter Age : ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("U can Vote");
    }
    if(age<18)
    {
        printf("U r Nibba, You Can Not Vote, Babu ko kahna khilao");
    }
    if(age==18)
    {
        printf("Congratulation on Being a Man for Nibba");
    }
}