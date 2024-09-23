#include<stdio.h>
//How to find the length & Breadth of a rectangle

int main(){
    int length,breadth;
    
    printf("Enter the length of rectangle:");
    scanf("%d", &length);

    printf("Enter the breadth of rectangle:");  
    scanf("%d", &breadth);
    
    printf("The area of the rectangle is %d",length*breadth);
    return 0;
}
// This code is use to take input form user