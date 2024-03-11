#include<stdio.h>
#include<stdlib.h>

int stack[50];
int top=-1;

struct node{
    int data;
    struct node* next;
}*head=NULL,*newnode,*p,*q;

void addatbegin();
void addatposition();
void addatend();
void deleteatbegin();
void deleteatposition();
void deleteatend();
void lengthprint();
void display();
void swapnodes();
void reverse();
int main(){
    int ch;
    while(1)
    {
        printf("\n\t\t     MAIN MENU\n\n1. ADD AT BEGIN\t\t\t2. ADD AT POSITION\n3. ADD AT END\t\t\t4. DELETE AT BEGIN\n5. DELETE AT POSITION\t\t6. DELETE AT END\n7. LENGTH OF LINKED LIST\t8. DISPLAY\n9. SWAP NODES\t\t\t10. EXIT\n");
        
        printf("\n\nEnter Your Choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: addatbegin();
                    break;
            case 2: addatposition();
                    break;
            case 3: addatend(); 
                    break;
            case 4: deleteatbegin(); 
                    break;
            case 5: deleteatposition(); 
                    break;
            case 6: deleteatend(); 
                    break;
            case 7: lengthprint(); 
                    break;
            case 8: display(); 
                    break;
            case 9: swapnodes();
                    break;
            case 10: printf("\n\nThankyou !!"); 
                    return 0;
            case 11: reverse();
            break;
            default: printf("INVALID CHOICE ! , Please Try Again...\n");
        }
    
    }
    return 0;
}


void addatbegin(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head = newnode;
    printf("\n%d Added Successfully at begin.\n",newnode->data);
}

void addatposition(){
    int x,count=0;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the position to Insert: ");
    scanf("%d",&x);
    p=head;
    while(p!=NULL){
        count++;
        p=p->next;
    }    
    if(x>0 && x<=count+1){
        if(x==1){
            addatbegin();
            return;
        }
        else{
        printf("Enter the Data: ");
        scanf("%d",&newnode->data);
        p=head;
        count = 1;
        while(count<x-1){
            p=p->next;
            count++;
        }
        newnode->next = p->next;
        p->next = newnode;
        printf("\n%d added successfully at position\n",newnode->data);
        }
    }
    else {
        printf("Insertion at position-> %d is not possible\n",x);
    }
}

void addatend(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
    }
    else {
        p = head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next = newnode;
    }
    printf("\n%d added successfully at end\n",newnode->data);
}

void deleteatbegin(){
    if(head==NULL){
        printf("\nLinked List is Empty\n");
        return;
    }
    else {
        p=head;
        head = p->next;
        printf("%d deleted successfully at begin\n",p->data);
        free(p);
    }
}

void deleteatend(){
    if(head==NULL){
        printf("\nLinked List is Empty\n");
        return;
    }
    else {
        p=head;
        while(p->next!=NULL){
            q=p;
            p=p->next;
        }
        if(p==head){
            deleteatbegin();
            return;
        }
        q->next=NULL;
        printf("%d deleted Successfully at end\n",p->data);
        free(p);
    }
}

void deleteatposition(){
    if(head==NULL){
        printf("\nLinked List is Empty\n");
        return;
    }
    else {
        int x,count=0;
        printf("Enter the Position to Delete: ");
        scanf("%d",&x);
        if(x==1){
            deleteatbegin();
            return;
        }
        p=head;
        while(p !=NULL){
            count++;
            p=p->next;
        }
        if(x<1 || x>count){
            printf("Deletion at position -> %d is not possible\n",x);
            return;
        }
        else{
            p=head;
            count=1;
            while(x>count){
                count++;
                q=p;
                p=p->next;
            }
            q->next = p->next;
            printf("%d deleted successfully from position -> %d",p->data,x);
            free(p);
        }
    }
}


void display(){
    if(head==NULL){
        printf("Linked List is Empty\n\n");
        return;
    }
    else{
    p=head;
    while(p!=NULL){
        printf("%d\n",p->data);
        p = p->next;
    }
    }
}

void lengthprint(){
    p=head;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    printf("Total Number of Nodes: %d\n\n",count);
}
void swapnodes(){
    int f,l;
    printf("Enter the 1st index to swap: ");
    scanf("%d",&f);
    printf("Enter the 2nd index to swap: ");
    scanf("%d",&l);    
    struct node* o;
    struct node* r;
    struct node* s;
    p = head;
    q = head;
    for(int i=1;i<f;i++)
    {
        o=p;
        p = p->next;
    }
    for(int i=1;i<l;i++)
    {
        s=q;
        q = q->next;
    }
    
    p->next = q->next;
    q->next = p;
    o->next = q;
    
    display();
}


void reverse(){
    if(head==NULL) printf("\n\nLinked List is Empty\n\n");
    else{
        top=-1;
    p=head;
    while(p!=NULL){
        top++;
        stack[top] = p->data;
        p = p->next;
    }
    printf("\n\nThe Reversed Linked List is: \n");
    p=head;
    while(p!=NULL){
        p->data = stack[top];
    printf(" %d\n",stack[top]);
    top--;
    p = p->next;
    }
}
}