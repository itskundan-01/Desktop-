#include<stdio.h>
int ispasswordset=0;
char lockpassword[50];

struct Diary
{
    char date[15];
    char time[15];
    char entry[1000];
};

void password();
void addrecord();
void viewrecord();
void deleterecord();
void editrecord();


int main()
{
    int ch;
    while(1)
    {
        printf("\nWelcome To Diary\n\n\tMAIN MENU");
        printf("\n1.PASSWORD\n2.ADD RECORD\n3.VIEW RECORD\n4.DELETE RECORD\n5.EDIT RECORD\n6.EXIT");
        printf("\n\nEnter your Choice(1-6): ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: password(); 
                break;
        case 2: addrecord();
                 break;
        case 3: viewrecord();
                 break;
        case 4: deleterecord(); 
                break;
        case 5: editrecord();
                 break;
        case 6: printf("Thankyou!!");
                return 0;
        default: printf("\nInvalid Choice Entered ! , Try again\n");
                 break;
        }
    }
    return 0;
}


void password()
{
    printf("This is Password Section\n");
    if(!ispasswordset)
    {
    printf("Please Set Password: \n");
    scanf("%s",lockpassword);
    ispasswordset=1;
    printf("Password Set Successfully");
    }
    else {
        printf("Change your password");
    }
}
void addrecord()
{
    printf("This  is add record section");
}
void viewrecord()
{
    printf("This  is view record section");
}
void deleterecord()
{
    printf("This is Delete Record section");
}
void editrecord()
{
    printf("This is Edit Record section");
}