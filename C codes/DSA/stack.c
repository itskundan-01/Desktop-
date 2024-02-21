#include<stdio.h>
#define n 5
int stack[n];
int top=-1;

void push();
void pop();
void peek();
void display();
int main(){
    int x;
    while(1){
    printf("\tMENU\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n\n");
    printf("Enter the choice : ");
    scanf("%d",&x);
    switch (x)  
    {
    case 1: push(); break;
    case 2: pop(); break;
    case 3: peek(); break;
    case 4: display(); break;
    case 5: return 0;
    default: printf("Invalid input!\n");
    }
}
    return 0;
}

void push(){
    if(top==n-1){
        printf("Stack Overflow.\n");
        return;
    }
    else{
        top++;
        int x;
        printf("enter the element to push: ");
        scanf("%d",&x);
        stack[top]=x;
        printf("%d pushed successfully\n",x); 
    }
}

void pop(){
    if(top==-1){
        printf("Stack is Empty\n");
        return;
    }
    else{
        printf("%d deleted successfully\n",stack[top]);
        top--;
    }
}

void peek(){
    if(top==-1){
        printf("Stack is Empty\n");
        return;
    }
    else{
        printf("The top element is: %d\n\n",stack[top]);
    }
}

void display(){
    if(top==-1){
        printf("Stack is Empty\n");
        return;
    }
    else{
        printf("The Elements in stack is:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
