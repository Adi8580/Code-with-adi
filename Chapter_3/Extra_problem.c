#include<stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>15)
    {
        printf("a is greater than 15\n");
    }
    if(a%5==0)
    {
        printf("a is divisible by 5\n");
        printf("The reminder is 0");
    }
    return 0;
}