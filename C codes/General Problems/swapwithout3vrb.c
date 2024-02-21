#include<stdio.h>
int main(){
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe Value after swapping 10 and 20 is: %d and %d\n",a,b);
    return 0;
}