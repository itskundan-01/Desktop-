#include<stdio.h>
int main(){
    int n,count=0;
    printf("\nEnter the limit (from 1 to n )of generating prime number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i!=0) printf("%d\t",i);
    }
    
    return 0;
}