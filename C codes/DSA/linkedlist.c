#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
}*head = NULL,*newnode,*p,*q;


int length() {
    int size = 0;
    p = head;
    while (p != NULL) {
        size++;
        p = p->next;
    }
    return size;
}

void addatbegin(){
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode -> data);
    newnode-> next=head;
    head = newnode;
} 

void append(){
    int x;
    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&x);
    newnode-> data=x;
    newnode-> next = NULL;
    if(head==NULL) head = newnode;
    else{
        p=head;
        while (p->next!=NULL){
            p=p->next;
        }
        p->next = newnode;
        
    }
}

void addatmiddle(){
    int position;
    printf("Enter location to insert: \n");
    scanf("%d",&position);
    if(position>length()) printf("Insertion Not Possible");
    else {
        int i=1;
        p=head;
        while(i<position){
            p=p->next;
            i++;
        }
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: \n");
        scanf("%d",&newnode->data);
       // newnode->next=NULL;
        newnode->next=p->next;
        p->next=newnode;
    }
}

void display(){
    // int c=0;
    p=head;
    while(p->next!=NULL){
        printf("%d-->",p->data);
        p=p->next;
    }
    printf("%d-->",p->data);
    printf("NULL\n");
}


void deleteatfirst(){
    p=head;
    if(p->next ==NULL) head =NULL;
    else{
        printf("%d Deleted Successfully.\n",p->data);
        head=p->next;
        free(p);
    }
}

void deleteatend(){
    p=head;
    if(p->next==NULL){
        head==NULL;
    }
    else{
        while(p->next!=NULL){
            q=p;
            p=p->next;
        }
        printf("%d Deleted Successfully.\n",p->data);
        free(p);
        p=q;
    }
}


void deleteatpos(){
    int i=1,midpos;
    printf("Enter location to delete: \n");
    scanf("%d",&midpos);
    if(midpos>length()){
        printf("Deletion not possible!\n");
    }
    else {
        p=head;
        while(i<midpos){
            p=p->next;
            i++;
            printf("%d deleted successfully.\n",p->data);
            p->next=p->next->next;
        }
    }
    
    
    
}







int main(){

addatbegin();
display();

}












