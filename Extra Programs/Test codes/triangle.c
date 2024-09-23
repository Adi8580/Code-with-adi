#include<stdio.h>
#include<math.h>
int main(){
    float p,q,r,s,x;
    p=34,q=88,r=99;
    s=(p+q+r)/2;
    x=sqrt(s*(s-p)*(s-q)*(s-r));
    printf("x is the area of triangle is :-%.2f",x);
    return 0;
}
// This thing is use for find the full area of a triangle without using the L*b/2formula