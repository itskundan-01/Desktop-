#include<stdio.h>
int main()
{
    int x=10;
    int result = x++ + ++x - x-- + --x;
    printf("%d",result);
    return 0;
}