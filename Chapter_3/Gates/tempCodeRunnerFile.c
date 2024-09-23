#include<stdio.h>

int main(){
        int a , b;
        printf("Enter the value of a is :-");
        scanf("%d",&a);
        printf("Enter the value of b is :-");
        scanf("%d",&b);
    printf("\nThe value of a and b is :%d\n",a&&b);
    printf("The value of a or b is :%d\n",a||b);
    printf("The value of not a is :%d\n", !a);
    printf("The value  of not b is :%d\n",!b);

    if(a&&b)
    {
        printf("Both a and b are true");
    }
    else
    {
        printf("Either a or b is false");
    }
    
return 0;
}