#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the starting number: ");
    scanf("%d",&a);
    printf("Enter the ending number: ");
    scanf("%d",&b);
    int c=a<<b;
    printf("The result of bitwise left shift operation is: %d\n",c);
    if(c>=50) printf("Result is greater than or equal to 50.\n");
    else printf("Result is less than 50.\n");
    return 0;
}