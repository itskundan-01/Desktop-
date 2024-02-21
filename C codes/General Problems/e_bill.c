#include<stdio.h>
int main(){
    float n;
    int c;
    printf("Enter the Unit count: ");
    scanf("%f",&n);
    if(n>0 && n<=100.0) c=1;
    else if(n>100.0 && n<=200.0) c=2;
    else  if(n>200.0 && n<=500.0) c=3;
    else if(n>500.0) c=4;
    switch(c){
        case 1: printf("Total Bill Amount: %.2f",n*0);
                                break;
        case 2: printf("Total Bill Amount: %.2f",n*5 + (n*5)*0.18);
                                break;
        case 3: printf("Total Bill Amount: %.2f",n*8 + (n*8)*0.18);
                                break;
        case 4: printf("Total Bill Amount: %.2f",n*10 + (n*10)*0.18);
                                break;
        default: printf("Thank You!!");
    }
    return 0;
}