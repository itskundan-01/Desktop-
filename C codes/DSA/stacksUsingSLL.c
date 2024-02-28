#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*top=NULL,*newnode,*p;

void push(int);
void pop();
void peek();
void display();
void clear()
{
    printf("\n\nPress ENTER to continue: \n");
    getchar();
    getchar();
    printf("\e[1;1H\e[2J");
}
int main(){
    printf("\e[1;1H\e[2J");
    int ch;
    while(1){
    printf("\t\tMAIN MENU\n\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT\n\n\tEnter Your Choice: ");
    scanf("%d",&ch);
    printf("\e[1;1H\e[2J");
    switch(ch){
        case 1: int n;
                printf("Enter the Data to Push: ");
                scanf("%d",&n);
                push(n);
                break;
        case 2: pop();
                break;
        case 3: peek();
                break;
        case 4: display();
                break;
        case 5: printf("\n\nThank You !!\n");
                exit(0);
        default: printf("\nInvalid Choice entered ! Try again\n\n");
    }
    }
    return 0;
}

void push(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = top;
    top = newnode;
    printf("\n%d Pushed Successfully into Stack\n",n);
    clear();
}

void pop(){
    if(top==NULL) printf("Stack is Empty ! Nothing to Delete\n");
    else{
        p=top;
        top = top->next;
        printf("\n%d Popped Successfully from Stack\n",p->data);
        free(p);
        clear();
    }
}

void peek(){
    if(top!=NULL)
    printf("\nThe Top element in Stack is: %d\n\n",top->data);
    else printf("\nStack is Empty ! \n\n");
    clear();
}

void display(){
    if(top==NULL){
        printf("\n Stack is Empty ! Nothing to Display\n\n"); clear();
    }
    else{
        p=top;
        printf("\n\n");
        while(p!=NULL){
            printf("%02d\n |\n |\n V\n",p->data);
            p=p->next;
        }
        printf("NULL\n\n");
        clear();
    }
}