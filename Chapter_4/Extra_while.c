#include<stdio.h>

int main(){
    int i = 0;
    while(i<=10)
    {
        printf("%d\n",i);
        i = i + 1;
    }
    return 0;
}
/*
If we write i = i + 1 ; as i++ then the code will be same as above code.
And i = i + 1 main function is when i is 0 then it will be 1 and then it will be 2 and so on.
Then its come 10 and then it will stop.
*/