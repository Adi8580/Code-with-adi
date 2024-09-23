#include<stdio.h>

int main()
{
    /*float a = 8.5;
    int b = 2;
    float c = a / b;
    printf("The value of c is : %.3f",c);

    return 0;*/

    int a = 8.5;
    int b = 2;
    int c = a / b;
    printf("The value of c is : %d",c);
    return 0;
}
// The final value is 4  because the decimal part is truncated when we divide two integers. 
// But the actual value is 4.25
