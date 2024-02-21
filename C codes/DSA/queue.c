#include<stdio.h>
#define n 5
int queue[5];
int front=-1,rear=-1;

void enqueue();
void dequeue();
void display();

int main(){
    int x;
    while(1){
    printf("\tMENU\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4.EXIT\n\n");
    printf("Enter the choice : ");
    scanf("%d",&x);
    switch (x)  
    {
    case 1: enqueue(); break;
    case 2: dequeue(); break;
    case 3: display(); break;
    case 4: printf("\nThankyou\n");
            return 0;
    default: printf("Invalid input!\n");
    }
}

    return 0;
}

void enqueue(){
    if(rear==n-1){
        printf("QUEUE OVERFLOW\n");
        return;
    }
    else{
        int x;
        printf("Enter the element: ");
        scanf("%d",&x);
        if(front ==-1 && rear==-1){
            front++;
            rear++;
        }
        else rear++;

        queue[rear]=x;
        printf("%d Enqueued Successfully\n",queue[rear]);
    }
}

void dequeue(){
    if(front==-1){
        printf("QUEUE IS EMPTY\n");
        return;
    }
    else{
        printf("%d deleted successfully\n",queue[front]);
/*can be skipped*/
        if(front==rear){
            front=-1;
            rear=-1;
        }
/*Till here*/ 
        else       
        front++;
    }
}

void display(){
    if(rear==-1){
        printf("Queue is Empty\n");
        return;
    }
    else{
        printf("The elements of Queue is: \n");
        for(int i=front;i<=rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}





