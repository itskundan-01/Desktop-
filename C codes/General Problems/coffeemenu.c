#include<stdio.h>
int main(){
    int ch;
    printf("\n\tMAIN MENU\n1. Regular Coffee\n2. Decaffeinated Coffee\n\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    if(ch<1 || ch>2){
        printf("Invalid Choice ! \n");
        return -1;
    }
    if(ch==1)
    printf("Your Regular Coffee is brewing under Process...\n");
    else printf("Your Decaffeinated Coffee is brewing under Process...\n ");
    return 0;
}