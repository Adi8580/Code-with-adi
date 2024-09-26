#include<stdio.h>

int main(){
    int i =10;//10 or 11 or more greater then 10.
    while(i>=10) //If i change this i to integer 0 to 10 or greater then 10 its goes into infinite loop.
    {
        printf("The value of i is :- %d\n",i);
        i++;
    }
    return 0;
}
/*
when i is greater then or equal to 10 then it will print the value of i and then it will increment the value.
*/