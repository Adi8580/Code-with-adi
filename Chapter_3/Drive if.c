#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=80)
    {
        printf("# You can drive this car\n");
        printf("# and you are also a Legendary guy\n");
    }
    else if(age>=60)
    {
        printf("# You can drive this car\n");
        printf("# and you are also a senior citizen\n");
    }
    else if(age>=18)
    {
        printf("# You can drive this car\n");
        printf("# and you are also a young driver\n");
    }
    else if(age>=15)
    {
        printf("# You can ride a bicycle\n");
        printf("# because you are a minor\n");
    }
    else if(age>=10)
    {
        printf("# You cannot ride a bicycle\n");
        printf("# because you are a kid\n");
    }
    else
    {
        printf("You can only play with a toy car");
    }
    return 0;
}
