#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the matrix elements: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int transpose[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[j][i]=arr[i][j];
        }
    }




    printf("The transpose of Matrix is: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}