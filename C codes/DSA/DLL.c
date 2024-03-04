#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
}*head=NULL,*newnode,*p;

void addatbegin();
void addatposition();
void addatend();
void deleteatbegin();
void deleteatposition();
void deleteatend();
int length();
void display();
void search();
void empty();
void reverse();

int main(){
    int ch;
    while(1)
    {
        printf("\n\t\t     MAIN MENU\n\n1. ADD AT BEGIN\t\t\t2. ADD AT POSITION\n3. ADD AT END\t\t\t4. DELETE AT BEGIN\n5. DELETE AT POSITION\t\t6. DELETE AT END\n7. LENGTH OF LINKED LIST\t8. DISPLAY\n9. SEARCH\t\t\t10. REVERSE\n\n\t\t11. EXIT\n");
        
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
            case 7: printf("\n\nTotal Number of Nodes: %d\n\n",length()) ; 
                    break;
            case 8: display(); 
                    break;
            case 9: search();
                    break;
            case 11: printf("\n\nThankyou !!\n\n"); 
                    return 0;
            case 10: reverse();
                    break;
            default: printf("INVALID CHOICE ! , Please Try Again...\n");
        }
    
    }
    return 0;
}

void empty(){
    printf("\n\nLinked List is Empty\n");
}

void addatbegin(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the Data: ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    newnode->prev= NULL;
    if(head!=NULL) head->prev = newnode;
    head = newnode;
    printf("\n\n%d Inserted Successfully at Begin.\n",newnode->data);
}

void addatend(){
    newnode = (struct node*)malloc(sizeof(struct node));
    
    if(head==NULL){
        addatbegin();
        return;
    }
    else{
        printf("\nEnter the Data: ");
        scanf("%d",&newnode->data);
        p=head;
        while(p->next!=NULL) 
        p=p->next;
        newnode->next=NULL;
        p->next=newnode;
        newnode->prev = p;
        printf("\n\n%d Added Successfully at End\n",newnode->data);
    }

}

void addatposition(){
    newnode = (struct node*)malloc(sizeof(struct node));
    int pos,len = length();
    printf("\n\nEnter the Position to Insert: ");
    scanf("%d",&pos);
    if(pos<1 || pos>len+1){
        printf("\n\nInsertion at position -> %d is not possible\n\n",pos);
        return;
    }
    if(pos==1){                 // 1st index isliye call add-at-begin
        addatbegin();
        return;
    }
    else if(pos==len+1){
        addatend();             // last index isliye call add-at-last to reduce repetation
        return;
    }
    printf("\n\nEnter the Data : ");
    scanf("%d",&newnode->data);
    p=head;
    for(int i=1;i<pos-1;i++)
        p= p->next;
    newnode->next = p->next;
    newnode->prev = p;
    p->next->prev = newnode;
    p->next = newnode;
    printf("\n%d Inserted Successfully at Position -> %d\n\n",newnode->data,pos);
}

void deleteatbegin(){
    if(head==NULL){
        empty();
        return;
    }
    p=head;
    head=head->next;
    if(head!=NULL)   //it will not be head->next because we have updated head++ before this line
    head->prev = NULL;
    // p->next->prev = NULL; //not required this line
    printf("\n\n%d Deleted Successfully from Begin\n",p->data);
    free(p);
}

void deleteatposition(){
    if(head==NULL){
        empty();
        return;
    }
    int pos,len = length();
    printf("\n\nEnter the Position to Delete: ");
    scanf("%d",&pos);
    if(pos<1 || pos>len){
        printf("\n\nDeletion at position -> %d is not possible\n\n",pos);
        return;
    }
    if(pos==1){
        deleteatbegin();            // cuz 1st index
        return;
    }
    else if(pos==len){              // cuz last index
        deleteatend();
        return;
    }
    p=head;
    for(int i=1;i<pos;i++)
        p=p->next;
    p->prev->next = p->next;
    p->next->prev = p->prev;
    printf("\n\n%d Deleted Successfully from Position -> %d.\n",p->data,pos);
    free(p);
}


void deleteatend(){
    if(head==NULL){
        empty();                   // if DLL is empty calling function to print 
        return;                     // kyuki 1 hi statement baar baar repeat ho rha tha is liye
    }                               // function bana diya
    p=head;
    while(p->next!=NULL) 
    p=p->next;
    if(p==head){
        deleteatbegin();           //if 1st node then calling del-at-start and returning
        return;
    }
    p->prev->next = NULL;           //else deleting from back of node
    printf("\n\n%d Deleted Successfully from End\n",p->data);
    free(p);

}



int length(){
    int count=0;
    p= head;
    while(p!=NULL) {
        count++;
        p=p->next;
    }
    return count;
}

void display(){
    if(head==NULL){
        empty();
        return;
    }
    else{
        p = head;
        while(p!=NULL){                     // out-putting first to last data
            printf("%d<--> ",p->data);
            p = p->next;
        }
        printf("NULL\n");
    }
}

void search(){
    if(head==NULL){
        empty();
        return;
    }
    int n;
    printf("\nEnter the Number to search: ");
    scanf("%d",&n);
    p=head;
    for(int i=1;p!=NULL;i++){
        if(n==p->data){
            printf("\n%d found at Position %d\n",n,i);
            return;                                        //Direct returning when found
        }
        p=p->next;
    }
    printf("\n%d Not Found in DATA-BASE !\n",n);  // if not found then print the statement
}

void reverse(){
    if(head==NULL){
        empty();
        return;
    }
    p=head;
    while(p->next!=NULL)            // It will go 1 less than full cuz last is NULL
        p=p->next;
    printf("\n\nThe reversed Linked List is: NULL");
    while(p!=NULL){                 //cuz it is DLL and it has prev with head's prev NULL
        printf(" <-->%d",p->data);
        p=p->prev;
    }

}