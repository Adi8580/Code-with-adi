#include <stdio.h>
int main()
{
int choice ;
printf(" please enter choice what u want to drink :- ");
scanf("%d",&choice);

if(choice==1)
{
    printf(" please wait  , your tea is being ready");
}
else if(choice==2)
{
    printf(" please wait , your coffee is being ready");
}else
{
    printf("You give a invalid choice ");
}
return 0;
} 