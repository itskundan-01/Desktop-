/*Code to sort the rank of participants based
 on their Finish time in a marathon event*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of participants: ");
    scanf("%d",&n);
    struct sort
    {
        char name[20];
        float ftime;
    }s[n];

    for(int i=0;i<n;i++){
        getchar();
        printf("Enter the name of player %d: ",i+1);
        scanf("%[^\n]s",s[i].name);
        printf("Enter the finish time of %s: ",s[i].name);
        scanf("%f",&s[i].ftime);
        printf("\n");
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(s[j].ftime>s[j+1].ftime) {
                struct sort temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("The sorted list of participants according to finish time is: \n\n");
    printf("Rank\t   NAME\t\t\tFinish Time\n\n");
    for(int i=0;i<n;i++){
        printf("%d\t%s\t\t%.2f sec.\n",i+1,s[i].name,s[i].ftime);
    }
    
    return 0;
}