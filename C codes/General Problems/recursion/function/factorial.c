#include<stdio.h>
int factorial(int f){
    int fact;
    if(f==0 || f==1) return 1;
    else{
    return fact=f*factorial(f-1);
    }
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    int fact = factorial(n);
    printf("The factorial of %d is: %d",n,fact);
    return 0;
}