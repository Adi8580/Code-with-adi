#include <stdio.h>
int main()
{
    char a;
    int b;
    int c;
    printf("First letter of your name :-");
    scanf("%c", &a);
    printf("Enter your DOB :-");
    scanf("%d", &b);
    printf("Enter your roll number :-");
    scanf("%d", &c);
//     printf("%c %d %d", a, b, c);
    printf("1st letter of your name is %c\n Your date of birth is %d\n Your roll number is :%d", a, b, c);
    return 0;
}
