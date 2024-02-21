#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    if((a*a +b*b) ==c*c) printf("Yes, (%d,%d,%d) is a Pythagorean Triplet\n",a,b,c);
    else printf("No, (%d,%d,%d) is not a Pythagorean Triplet\n",a,b,c);
    return 0;
}