#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
char *uppercase(char input[]){
    char *result = (char*)malloc(sizeof(result));
    for(int i=0;input[i]!='\0';i++){
        result[i] = toupper(input[i]);
    }
    result[strlen(input)] = '\0';
    return result;
}

int main(){
    int n;
    printf("Enter the string length: ");
    scanf("%d",&n);
    getchar();
    char string[n];
    puts("Enter string: ");
    fgets(string,n,stdin);
    char *result = uppercase(string);
    printf("%s\n",result);
    return 0;
}