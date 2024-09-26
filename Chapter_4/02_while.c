#include<stdio.h>
int main()
{
    int i = 0;
    while(i<=5)
    {
        printf("Happy Birthday\n",i);
        i = i + 1;
    }
    return 0;
}
/*
If we write i = i + 1 ; as i++ then the code will be same as above code.
And i = i + 1 main function is when i is 0 then it will be 1 and then it will be 2 and so on.


If i is greater than 5 then the while loop will not run because the condition is i<=5.
i is not greater than 5 then its a false condition so the while loop will not run.
If i is not greater than 5 then the while loop will run and it will print Happy Birthday 5 times.

