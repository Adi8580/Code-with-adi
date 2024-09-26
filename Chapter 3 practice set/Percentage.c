#include<stdio.h>
#include<math.h>
int main()
{
    int marks1 , marks2 , marks3 , percentage;
    printf("Enter your marks: ");
    scanf("%d", &marks1);
    printf("Enter your marks: ");
    scanf("%d", &marks2);
    printf("Enter your marks: ");
    scanf("%d", &marks3);
    percentage = (marks1 + marks2 + marks3) / 3;
    printf("Your percentage is: %d percent", percentage);
    if(marks1<33  || marks2<33 || marks3<33 )
    {
        printf("\nYou are failed in individual in subjects");
    }
    else
    {
    printf("\nYou are passed in individual subjects");
    }
    return 0;
}
/*
always remeber if you have one condition then you have to use else condition.
but if you have two condition then you can use else if condition also.
*/