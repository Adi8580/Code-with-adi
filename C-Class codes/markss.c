#include <stdio.h>
int main(){
    int a , b , c , s;
    printf("Enter the first side of triangle a is :");
    scanf("%d",&a);
    printf("Enter the second side of triangle b is :");
    scanf("%d",&b);
    printf("Enter the other side of c is : ");
    scanf("%d",&c);
    
    s = a+b;
    printf("The sum of a and b is %d\n",s);
    if(s>c){
        printf("Yes this is a legendary triangle");
    }
    else{
        printf("Dafa ho ja ya triangle nahi hai");
    }
    return 0;
}