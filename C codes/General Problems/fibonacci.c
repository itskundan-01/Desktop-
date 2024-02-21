#include<stdio.h>
int main(){
    int n;
    printf("Enter the Limit of fibonacci to generate: ");
    scanf("%d",&n);
    int a=0,b=1,fib;
    printf("%d\t%d\t",a,b);
    for(int i=2;i<n;i++){
        fib=a+b;
        a=b;
        b=fib;
        printf("%d\t",fib);
    }
    printf("\n The sum of %dth Term of Fibonacci series is: %d",n,fib);
    return 0;

}