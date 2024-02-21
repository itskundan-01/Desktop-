#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the Size of string: ");
    scanf("%d",&n);
    getchar();
    char str[n];
    printf("Enter the String: ");
    fgets(str,n,stdin);
    // scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
    for(int j=0;j<i+1;j++){
        printf("%c",str[j]); 
    }
    printf("\n");
    }
    return 0;
}