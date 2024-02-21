#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter the string size: ");
    scanf("%d",&n);
    getchar();
    char str[n];
    printf("Enter the string: ");
    fgets(str,n,stdin);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    for(int i=count;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}