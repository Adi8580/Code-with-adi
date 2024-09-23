#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are an adult.");
    }
    else if (age >= 13)
    {
        printf("You enter to teenage.");
    }
    else
    {
        printf("You are child.");
    }
    return 0;
}