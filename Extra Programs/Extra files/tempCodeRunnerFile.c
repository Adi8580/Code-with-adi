#include <stdio.h>

int main(){
    int students , toffies;
    printf(" enter the no. of students ");
    scanf("%d",&students);
    printf(" enter the no. of toffies ");
    scanf("%d",&toffies);
    printf("each student get %d toffie:",toffies/students);
    printf("\n the reamaining toffies: %d",toffies%students);
    printf("\nthe extra toffies we want: %d",students-toffies%students);
    return 0;
}