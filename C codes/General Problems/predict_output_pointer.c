#include<stdio.h>
int main(){
    int x[5]={10,20,30,40,50};
    int *ptr = &x[4];
    printf("%d %d\n",*(ptr-2),*ptr-2);
    return 0;
}