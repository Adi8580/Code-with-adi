#include<stdio.h>

int main(){
    char alphabet;
    printf("Enter an alphabet: ");
    scanf("%c", &alphabet);
    if(alphabet=='a' ||  alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
    {
        printf("The entered alphabet is a vowel.");
    }
    else
    {
        printf("The entered alphabet is a consonant.");
    }
    return 0;
}