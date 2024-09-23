#include<stdio.h>

int main(){
    int students , apples , dvd , reminder ;
    printf("Enter the number of students : ");
    scanf("%d",&students);
    printf("Enter the number of apples : ");
    scanf("%d",&apples);
    dvd = students /  apples ;
    printf("The number of divide is : %d\n",dvd);
    reminder = students % apples ;
    printf("The reminder is : %d\n",reminder);
    return 0;
}