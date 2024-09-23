#include<stdio.h>
#include<math.h>
int main(){
    int Students , toffees , given , reminder;
    printf("Enter the number of students : ");
    scanf("%d",&Students);
    printf("Enter the number of toffees : ");
    scanf("%d",&toffees);
    given = Students / toffees;
    printf("The number of students who will get toffees is %d\n",given);
    reminder = Students % toffees;
    printf("The number of students who will not get toffees is %d\n",reminder);
    return 0;
}