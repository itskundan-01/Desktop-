//Write a c program to genrate nxn matrix 
// filled with elements in spiral order

#include<stdio.h>
int main(){
    int n;
    printf("\nEnter the no. of Rows or Columns of [nxn] matrix: ");
    scanf("%d",&n);
    int spiral[n][n];


    int minr=0,maxr=n-1,minc=0,maxc=n-1,tne=n*n,count=1;
    while(count<=tne){
        for(int j=minc;j<=maxc && count<=tne;j++){
            spiral[minr][j] = count;
            count++;
        }
        minr++;

        for(int i=minr;i<=maxr && count<=tne;i++){
            spiral[i][maxc]=count;
            count++;
        }
        maxc--;

        for(int j=maxc;j>=minc && count<=tne;j--){
            spiral[maxr][j]=count;
            count++;
        }
        maxr--;

        for(int i=maxr;i>=minr && count<=tne;i--){
            spiral[i][minc]=count;
            count++;
        }
        minc++;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",spiral[i][j]);
        }
        printf("\n");
    }

    return 0;
}

