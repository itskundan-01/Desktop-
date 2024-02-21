#include<stdio.h>
int calpow(int , int);
//calculating power using function
void power(int base,int pwr){
    int res=1;
    for(int i=1;i<=pwr;i++){
        res=res*base;
    }
    printf("The result is: %d",res);
}
int main(){
    int b,p;
    printf("Enter the Base: ");
    scanf("%d",&b);
    printf("Enter the exponent: ");
    scanf("%d",&p);
    power(b,p);
    int res= calpow(b,p);
    printf("\n%d is the result.",res);
    return 0;
}
//calculating power using recursion
int calpow(int base, int exp){
    if(exp==0) return 1;
    else
    return base * calpow(base,exp-1);
}
