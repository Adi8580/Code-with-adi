#include<stdio.h>
#include<math.h>
int main(){
    int students , toffees , dvd , rem;
    printf("Enter the number of students :-");
    scanf("%d", &students);
    printf("Enter the number of toffees :-");
    scanf("%d" &toffees);
    dvd = students / toffees;
    printf("Each students will get %d toffees\n");
    rem = students % toffees;
    printf("The remaning number of toffees is :-%d");
    return 0;
}