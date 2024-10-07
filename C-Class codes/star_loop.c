#include<stdio.h>

int main(){
    char x = '*';
    while(x<=10){
        prntf("%d", &x);
    }
    x = x + 1;
    return 0;
}