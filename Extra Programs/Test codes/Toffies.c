#include<stdio.h>
int main(){
    int students, toffies, given, reminder;
    printf("Enter the number of students: ");
    scanf("%d", &students);
    printf("Enter the number of toffies: ");
    scanf("%d", &toffies);
    given = students /  toffies;
    printf("The  number of toffies each student will get is: %d\n", given);
    reminder = students % toffies;
    printf("The number of toffies left is: %d", reminder);
    return 0;
}