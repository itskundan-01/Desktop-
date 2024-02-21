#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct student
{
    char name[30];
    int roll;
    char grade;
    struct student* next;
}*head=NULL,*newstudent,*p,*q;

void adddata();
void deletedata();
void addatbegin();
void addatposition();
void addatend();
void deleteatbegin();
void deleteatposition();
void deleteatend();
void deleteall();
void display();
int length();
void printlength();
void search();
void searchbyroll();
void searchbyname();
void displayatbegin();
void displayatend();
void displayatposition();
void displayall();
char *uppercase();

void clear()
{
    printf("\n\nPress ENTER to continue: \n");
    getchar();
    getchar();
    printf("\e[1;1H\e[2J");
}

void clr()
{
    printf("\e[1;1H\e[2J");
}

int main(){
    int ch;
    clr();
    while(1)
    {
        
        printf("\n\t\tMAIN MENU\n\n1. ADD DATA\t\t2. DELETE DATA\n3. DISPLAY\t\t4. LENGTH\n5. SEARCH\t\t6. EXIT\n\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        clr();
        switch(ch)
        {
            case 1: adddata(); 
                    break;
            case 2: deletedata(); 
                    break;
            case 3: display(); 
                    break;
            case 4: printlength(); 
                    break;
            case 5: search(); 
                    break;
            case 6: printf("\nTHANK YOU !!\n\n"); 
                    return 0;
            default: printf("INVALID CHOICE ! , Please Try again...\n\n");
            clear();
        }
    }
    
    return 0;
}

void adddata()
{   
    clr();
    int ch;
    while(1)
    {
    printf("\t[ ADD DATA ]\n\n1. ADD AT BEGIN\n2. ADD AT POSITION\n3. ADD AT END\n4. RETURN TO MAIN MENU\n");
    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);
    clr();
    switch (ch)
    {
    case 1: addatbegin();
            break;
    case 2: addatposition();
            break;
    case 3: addatend();
            break;
    case 4: clr();return;
    
    default:printf("\n\nINVALID CHOICE !, Try again\n");
            break;
    }
    }
}

void deletedata()
{
    if(head==NULL)
    {
        printf("\nDATA-BASE is Empty, Nothing to DELETE...\n\n");
        clear();
        return;
    }
    clr();
    int ch;
    while(1)
    {
    printf("\t[ DELETE DATA ]\n\n1. DELETE AT BEGIN\n2. DELETE AT POSITION\n3. DELETE AT END\n4. DELETE ALL\n5. RETURN TO MAIN MENU\n");
    printf("\n\nEnter your choice: ");
    scanf("%d",&ch);
    clr();
    switch (ch)
    {
    case 1: deleteatbegin();
            break;
    case 2: deleteatposition();
            break;
    case 3: deleteatend();
            break;
    case 4: deleteall();
            return;
    case 5: clr();
            return;
    
    default:printf("\n\nINVALID CHOICE !, Try again\n");
            clear();
    }
    }

}

void addatbegin()
{
    newstudent = (struct student*) malloc(sizeof(struct student));
    getchar();
    printf("Enter the student name: ");
    scanf("%[^\n]s",newstudent->name);
    printf("Enter Roll no. of %s: ",newstudent->name);
    scanf("%d",&newstudent->roll);
    getchar();
    printf("Enter Grade of %s: ",newstudent->name);
    scanf("%c",&newstudent->grade);
    newstudent->next=head;
    head = newstudent;
    printf("\n Details of %s added successfully at Begin.\n\n",newstudent->name);
    clear();
}

void addatposition()
{
    int x;
    printf("Enter the position to INSERT: ");
    scanf("%d",&x);
    clr();

    if(x==1)
    {
        addatbegin();
        return;
    }

    if(x<1 || x>length()+1)
    {
        printf("\nInsertion at position -> %d is not Possible.\n\n",x);
        clear();
        return;
    }

    p=head;
    for(int i=1;i<x-1;i++)
    {
        p=p->next;
    }

    newstudent = (struct student*) malloc(sizeof(struct student));
    getchar();
    printf("Enter the student name: ");
    scanf("%[^\n]s",newstudent->name);
    printf("Enter Roll no. of %s: ",newstudent->name);
    scanf("%d",&newstudent->roll);
    getchar();
    printf("Enter Grade of %s: ",newstudent->name);
    scanf("%c",&newstudent->grade);
    newstudent->next = p->next;
    p->next = newstudent;
    printf("\nThe details of %s inserted successfully at position %d\n\n",newstudent->name,x);
    clear();
}

void addatend()
{
    newstudent = (struct student*) malloc(sizeof(struct student));
    getchar();
    printf("Enter the student name: ");
    scanf("%[^\n]s",newstudent->name);
    printf("Enter Roll no. of %s: ",newstudent->name);
    scanf("%d",&newstudent->roll);
    getchar();
    printf("Enter Grade of %s: ",newstudent->name);
    scanf("%c",&newstudent->grade);
    newstudent->next = NULL;
    if(head==NULL)
    {
        head = newstudent;
    }
    else
    {
    p=head;
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = newstudent;
    }
    printf("\n Details of %s added successfully at End.\n\n",newstudent->name);
    clear();
}

void deleteatbegin()
{   
    p=head;
    printf("\nThe details of %s Deleted Successfully.\n\n",head->name);
    head=head->next;
    free(p);
    clear();
}

void deleteatposition()
{   
    int x;
    printf("Enter the Position to delete: ");
    scanf("%d",&x);
    if(x<1 || x>length())
    {
        printf("\nDeletion at position %d is not possible.\n\n",x);
        clear();
        return;
    }
    if(x==1)
    {
        deleteatbegin();
        return;
    }
    else
    {
      p=head;
      for(int i=1;i<x;i++)
      {   
        q=p;
        p=p->next;
      }
      printf("\nThe details of %s deleted successfully at Position %d.\n\n",p->name,x);
      q->next = p->next;
      free(p);
    }
    clear();
}

void deleteatend()
{
    p=head;
    while(p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    if(p==head) deleteatbegin();
    else
    {
    printf("\nThe Details of %s deleted Successfully at End.\n\n",p->name);
    q->next = NULL;
    free(p);
    }
    clear();
}

void deleteall()
{
    int ch;
    printf("Please confirm to delete all the DATA\n\n");
    printf("0. Cancel\n1. Confirm\n\n");
    printf("Enter Your choice [0 or 1]: ");
    scanf("%d",&ch);
    clr();
    if(ch==1)
    {
    while(head!=NULL)
    {
        p = head;
        head = head->next;
        free(p);
    }
    printf("\nAll Data Deleted successfully!\n");
    clear();
    return;
}
else 
{
    printf("Deletion Cancelled Successfully.\nYour Data is Safe\n\n");
    clear();
    return;
}

}
void display()
{
    int x;
    if(head == NULL)
    {
        printf("\n\nDATA-BASE is Empty ! , Nothing to Display.\n\n");
        clear();
        return;
    }
    while(1)
    {
    printf("\n\t [ DISPLAY ]\n\n");
    printf("1. DISPLAY ALL\n2. DISPLAY 1st STUDENT\n3. DISPLAY AT POSITION\n4. DISPLAY LAST STUDENT\n5. RETURN TO MAIN MENU\n\nEnter your choice: ");
    scanf("%d",&x);
    clr();
    switch(x)
    {
        case 1: displayall();
                 break;
        case 2: displayatbegin();
                 break;
        case 3: displayatposition();
                 break;
        case 4: displayatend();
                 break;
        case 5: clr();
                return;
        default: printf("\nINVALID CHOICE ! , Try again....\n");
                clear();
    }
    }
}

void displayall()
{
    p=head;  
        int i=1;
        printf("S.No.\tNAME\t\tROLL No.\tGRADE\n");
        while(p!=NULL)
        {
            printf("\n%d.\t%s\t%d\t\t'%c'\n",i,p->name,p->roll,p->grade);
            i++;
            p=p->next;
        }
        clear();
}

void displayatbegin()
{
    printf("The details of 1st student is: \n");
    printf("\n1. Name: %s\tRoll No: %d\tGrade: '%c'\n\n",head->name,head->roll,head->grade);
    clear();
}

void displayatposition()
{
    int x;
    printf("Enter the position to display: ");
    scanf("%d",&x);
    if(x<1||x>length())
    {
        printf("\nINVALID Position entered ! try again\n\n ");
        clear();
        displayatposition();
    }
    if(x==1)
    {
        clr();
        displayatbegin();
    }

    else
    {
    p=head;
    for(int i=1;i<=x-1;i++)
    {
        p=p->next;
    }

    printf("\nThe details of student at Position %d is: \n",x);
    printf("\n1. Name: %s\tRoll No: %d\tGrade: '%c' \n",p->name,p->roll,p->grade);
    }
    clear();
}

void displayatend()
{
    p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    printf("The details of Last student is: \n");
    printf("\n1. Name: %s\tRoll No: %d\tGrade: '%c' \n\n",p->name,p->roll,p->grade);
    clear();
}

int length()
{
    int count=0;
    p=head;
    while(p!=NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

void printlength()
{
    int lnth = length();
    printf("\nTotal No. of student's details in DATA-BASE is: %d\n\n",lnth);
    clear();
}

void search()
{
    if(head==NULL)
    {
        printf("\nDATA-BASE is Empty.\n\n");
        clear();
        return;
    }
    int n;
    while(1)
    {
    printf("\n\t[ SEARCH BY: ]\n\n1. ROLL No.\n2. NAME\n3. RETURN TO MAIN MENU\n\n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    clr();
    switch(n)
    {
        case 1: searchbyroll();
                break;
        case 2: searchbyname();
                break;
        case 3: clr();return;
        default: printf("\nINVALID CHOICE ! , Try again...\n\n");
        clear();
    }
    }
}

void searchbyroll()
{
    int roll,flag=0;
    printf("Enter the Roll No. to search: ");
    scanf("%d",&roll);
    p=head;
    printf("\nSEARCH RESULT:\n\n");
    for(int i=1;p!=NULL;i++)
    {
        if(p->roll == roll)
        {
            printf("\nName: %s\t Roll No: %d\tGrade: '%c'\n\n",p->name,p->roll,p->grade);
            flag=1;
            break;
        }
        p=p->next;
    }
    if(flag==0) printf("\nNo Result Found similar to %d\n\n",roll);
    clear();
}

void searchbyname()
{
    int flag=0;
    char name[30];
    getchar();
    printf("Enter the Name of Student: ");
    scanf("%[^\n]s",name);
    p=head;
    printf("\nSEARCH RESULT:\n\n");
    for(int i=0;p!=NULL;i++)
    {
        char *studentname = uppercase(p->name);
        char *searchinput = uppercase(name);
        if(strstr(studentname,searchinput))
        {
            printf("\nName: %s\tRoll No: %d\tGrade: '%c'\n",p->name,p->roll,p->grade);
            flag=1;
        }
        free(studentname);
        free(searchinput);
        p=p->next;
    }
    if(flag==0) printf("\nNo Result Found similar to %s\n\n",name);
    clear();
}

char *uppercase(char input[])
{
    char *result = (char*)malloc(sizeof(result));
    for(int i=0;input[i]!='\0';i++)
    {
        result[i] = toupper(input[i]);
    }
    result[strlen(input)] = '\0';
    return result;
}
