#include<stdio.h>
int area(int , int);
int area (int length, int breadth)
{
    return length*breadth;
}


int main(){
int length = 54;
int breadth= 69;
area(length, breadth );
printf("The area of the rectangle is %d",area(length, breadth));
return 0;
}