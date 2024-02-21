#include<stdio.h>
int main(){
    int n,count=0;
    printf("\nEnter the number to check: ");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0) count++;
    }
    if(count==0) printf("%d is a Prime Number.",n);
    else printf("%d is not a Prime Number.",n);
    return 0;
}