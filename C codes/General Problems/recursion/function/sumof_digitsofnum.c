#include<stdio.h>
int sumofnum(int n){
    int sum=0,r;
    if(n==0) return 0;
    else{
        r=n%10;
        sum+=r;
        return sum+sumofnum(n/10);
    }
    
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum = sumofnum(n);
    printf("The sum of digits of %d is: %d",n,sum);
    return 0;
}