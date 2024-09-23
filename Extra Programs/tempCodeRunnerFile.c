#include <stdio.h>

int main(){
    int marks , math , physics , chemistry;
    float percentage;
    printf("enter the marks of math:");
    scanf("%d", &math);
    printf("enter the marks of physics:");
    scanf("%d", &physics);
    printf("enter the marks of chemistry:");
    scanf("%d", &chemistry);
    percentage = (math +  physics + chemistry)/3;

    printf("your percentage is %.f\n", percentage);

    if(percentage>60)
    {
        printf("you are passed in your exam your percentage is %.0f outoff 60 percent\n", percentage);
    }
    else if(percentage>40)
    {
        printf("you got a supply because your percentage is %.0f outoff 40 percent\n", percentage);
    }
    else
    {
        printf("you are failed in your exam your percentage is %.0f outoff 40 percent\n");
    }
return 0;
}