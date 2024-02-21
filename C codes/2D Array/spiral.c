#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the no. of Rows: ");
    scanf("%d",&a);
    printf("Enter the no. of Columns: ");
    scanf("%d",&b);
    int spiral[a][b];
    printf("Enter the Matrix elements: ");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&spiral[i][j]);
        }
    }

    int minr=0,maxr=a-1,minc=0,maxc=b-1,tne=a*b,count=0;
    while(count<tne){
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",spiral[minr][j]);
            count++;
        }
        minr++;

        for(int i=minr;i<=maxr && count<tne;i++){
            printf("%d ",spiral[i][maxc]);
            count++;
        }
        maxc--;

        for(int j=maxc;j>=minc && count<tne;j--){
            printf("%d ",spiral[maxr][j]);
            count++;
        }
        maxr--;

        for(int i=maxr;i>=minr && count<tne;i--){
            printf("%d ",spiral[i][minc]);
            count++;
        }
        minc++;




    }


    return 0;
}