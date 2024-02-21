#include<stdio.h>
int main(){
    int n,flag=0;
    printf("Enter the size of string: ");
    scanf("%d",&n);
    getchar();
    char string[n];
    char* s=string;
    char srch;
    printf("Enter the sentence: ");
    fgets(string,n,stdin);
    printf("NOW,\n\tEnter the character to count it's occurance: ");
    scanf("%c",&srch);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==srch) flag++;
        i++;
    }
    printf("The character occured %d times.\n",flag);
    return 0;
}