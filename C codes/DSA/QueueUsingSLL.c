#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
}*f=NULL,*r=NULL,*newnode,*p;

void enqueue(int);
void dequeue();
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
    printf("\t\tMAIN MENU\n\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n\n\tEnter Your Choice: ");
    scanf("%d",&ch);
    printf("\e[1;1H\e[2J");
    switch(ch){
        case 1: int n;
                printf("Enter the Data to Push: ");
                scanf("%d",&n);
                enqueue(n);
                break;
        case 2: dequeue();
                break;
        case 3: display();
                break;
        case 4: printf("\n\nThank You !!\n");
                exit(0);
        default: printf("\nInvalid Choice entered ! Try again\n\n");
    }
    }
    return 0;
}

void enqueue(int n){
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = NULL;
    if(f==NULL){
        f = newnode;
        r=newnode;
    }
    else{
    r->next=newnode;
    r = r->next;
    }
    printf("\n\n%d Enqueued Successfully\n\n",n);
    clear();
}

void dequeue(){
    if(1){
    if(f==NULL) printf("\n\nQueue is EMPTY ! Nothing to DELETE\n\n");
    else{
        p=f;
        f = f->next;
        printf("\n\n%d Deleted Successfully\n\n",p->data);
        free(p);
    }
    }
    clear();
}

void display(){
    if(1){
    if(f==NULL) printf("\n\nQueue is EMPTY ! Nothing to Display\n\n");
    else{
        p=f;
        printf("\n\n");
        while(p!=NULL){
            printf("%d --> ",p->data);
            p=p->next;
        }
        printf("NULL\n\n");
    }
    }
    clear();
    
}