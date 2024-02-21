#include<stdio.h>
int main(){
    char ch =65;
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=n-i+1;k<=n;k++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}