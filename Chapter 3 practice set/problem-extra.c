#include <stdio.h>

int main(){
    int marks , math , physics , chemistry;
    float percentage , sum;
    printf("enter the marks of math:");
    scanf("%d", &math);
    printf("enter the marks of physics:");
    scanf("%d", &physics);
    printf("enter the marks of chemistry:");
    scanf("%d", &chemistry);
    sum = math + physics + chemistry;
    percentage = (sum)/3;

    printf("your percentage is %.1f\n", percentage);

    if(percentage>=60)
    {
        printf("you are passed in your exam your percentage is %.1f\n", percentage);
    }
    else if(percentage>=45)
    {
        printf("you got a supply because your percentage is %.1f\n", percentage);
    }
    else
    {
        printf("you are failed in your exam your percentage is %.1f\n");
    }
return 0;
}