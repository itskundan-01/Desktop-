#include<stdio.h>
#include<stdlib.h>
#define n 4
int stack[n],top=-1;
void push();
void pop();
void peek();
void display();

int main(){
	int ch;
	//printf("Enter the size of stack: ");
//	scanf("%d",&n);
	system("cls");
		while(1){
	printf("Select the following optin...\n\t1. PUSH\n\t2. POP\n\t3. PEEK\n\t4. DISPLAY\n\t5. EXIT");
	
	printf("\n\nEnter your choice: ");
	scanf("%d",&ch);

		switch(ch){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: display();
					break;
			case 5: printf("Thankyou...");
					return 0;		
			default: printf("Please Enter the valid Choice\n");
					 break;					
		}
	}
	
	
	return 0;
}


void push(){
	system("cls");
	int x;
	if(top<n){
		printf("Enter the element to push: ");
		scanf("%d",&x);
		top++;
		stack[top] = x;
		printf("%d pushed successfully.\n",x);
	}
	else printf("Stack Overflow\n");
	getchar();
	printf("\n\nPress any key to go back to main menu\n");
	getchar();
	system("cls");
}
void pop(){
	system("cls");
	if(top==-1) printf("Stack is Empty\n");
	else{
	printf("%d Deleted successfully\n",stack[top]);
	top--;
}
	getchar();
	printf("\n\nPress any key to go back to main menu\n");	
	getchar();
	system("cls");
}

void peek(){
	system("cls");
	printf("The Peek element is: %d\n",stack[top]);
	printf("\n\nPress any key to go back to main menu\n");
	getchar();
	system("cls");
}

void display(){
	system("cls");
	if(top==-1) printf("stack is empty\n");
	else{
	for(int i=top;i>=0;i--){
	printf("%d\n",stack[i]);	
	}
	getchar();
	printf("\n\nPress any key to go back to main menu\n");
	getchar();
	system("cls");
}
}

