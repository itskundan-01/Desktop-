#include<stdio.h>
int main(){
    char name[20];
    int roll;
    float marks1,marks2,marks3;
    FILE *details;
    printf("Enter Student name: ");
    fgets(name,20,stdin);
    printf("Enter roll number: ");
    scanf("%d",&roll);
    printf("Enter marks in all 3 subjects: ");
    scanf("%f %f %f",&marks1,&marks2,&marks3);
    details=fopen("data.txt","w");
    fprintf(details,"name: %sroll number: %d\nmakrs: %.2f, %.2f, %.2f",name,roll,marks1,marks2,marks3);
    fclose(details);
    return 0;
}