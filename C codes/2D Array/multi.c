#include<stdio.h>
int main(){
    int n,m,a,b;
    printf("Enter the rows and columns of Matrix A: ");
    scanf("%d %d",&a,&b);
    printf("Enter the rows and columns of Matrix B: ");
    scanf("%d %d",&n,&m);
    if(b!=n){
        printf("Matrix Multiplication is Not Possible !\n");
        return 0;
    }
    int A_matrix[a][b],B_matrix[n][m],R_matrix[a][m];
    printf("Enter the Elements of Matrix A:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("Enter the element at [%d][%d] : ",i,j);
            scanf("%d",&A_matrix[i][j]);
        }
    }
    printf("Enter the Elements of Matrix B:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the element at [%d][%d] : ",i,j);
            scanf("%d",&B_matrix[i][j]);
        }
    }
    //Multiplication of Matrix
    for(int i=0;i<a;i++){
        for(int j=0;j<m;j++){
            //R_matrix[i][j] = 0;
            for(int k=0;k<a;k++){
            R_matrix[i][j] += A_matrix[i][k] * B_matrix[k][j];
        }
    }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",R_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}