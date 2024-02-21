#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of string: ");
    scanf("%d",&n);
    char name[n];
    scanf("%s",name);
    int a=0;
    for(int i=0;name[i]!='\0';i++){
        a++;
    }
    for(int i=0,j=a-1;i<j;i++,j--){
        char temp;
        temp = name[i];
        name[i]= name[j];
        name[j] = temp;

    }
    printf("%s",name);
    return 0;
}






