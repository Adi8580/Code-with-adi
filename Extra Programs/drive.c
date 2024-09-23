#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=100)
    {
        printf("# You can drive this car\n");
        printf("# and you are also a Legend person\n");
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
    else
    {
        printf("# You cannot drive any car or bicycle\n");
    }
    return 0;
}
