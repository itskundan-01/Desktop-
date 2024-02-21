//Code for multiplication of matrix.
#include<stdio.h>
int main(){
    int n,m,a,b;
    printf("Enter the rows of Matrix A: ");
    scanf("%d",&n);
    printf("Enter the columns of Matrix A: ");
    scanf("%d",&m);
    printf("Enter the rows of Matrix B: ");
    scanf("%d",&a);
    printf("Enter the columns of Matrix B: ");
    scanf("%d",&b);
    if(n!=b) {
        printf("INVALID INPUT!!");
        return 0;
    }
    int arr1[n][m],arr2[n][m],product[n][m];
    printf("Enter the matrix A: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the element at [%d][%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
        printf("NOW, Enter the matrix 2: ");
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            printf("Enter the element at [%d][%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            product[i][j]=0;
            for(int k=0;k<n;k++){    
            product[i][j] +=arr1[i][k]*arr2[k][j];
            }
           printf("%d\t",product[i][j]);
        }
        printf("\n");
    }



    return 0;
}