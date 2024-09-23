#include<stdio.h>
int main(){
    int choice;
    printf("Enter a number: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Here is your Tea");
        break;
        case 2:
        printf("Here is your Coffee");
        break;
        case 3:
        printf(" Here is your Juice");
        break;
        case 4:
        printf("Here is your Water");
        break;
        case 5:
        printf("Here is your Milk");
        break;
        case 6:
        printf("Here is your Soda");
        break;
        case 7:
        printf("Here is your Beer");
        break;
        case 8:
        printf("Here is your Wine");
        break;
        default:
        printf("Nikal ja yaha sa agar kuch nahi chayea");
        }
    return 0;
}