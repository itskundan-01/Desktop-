#include<stdio.h>
int main(){
    int n;
    float c,f,r;
    printf("\n\tMENU\n1. Celsius to Fahrenhiet\n2. Fahrenhiet to Celsius\n\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    if(n>2 || n<1){
        printf("Invalid Choice !");
        return -1;
    }
    else
    {
        if(n==1){
        printf("Enter the temperature in Celsius: ");
        scanf("%f",&c);
        r=c*9/5+32;
        printf("The temperature in Fahrenhiet is: %.2f",r);
        }
        else{
        printf("Enter the temperature in Fahrenhiet: ");
        scanf("%f",&f);
        r=(f-32) * 5/9;
        printf("The temperature in Celsius is: %.2f ",r);
        }
    }
    return 0;
}