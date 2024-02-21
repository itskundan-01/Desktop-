#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
void peek(){
    if(top==-1){
        printf("Stack  is Empty\n");
        return;
    }
    else{
        printf("The Top element in the stack is: %d\n",stack[top]);
    }
}

int main(){
    peek();
    return 0;
}