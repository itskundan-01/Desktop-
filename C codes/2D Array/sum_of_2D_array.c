#include<stdio.h>
int main()
{   
    int r,c;
    printf("Enter the rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    int brr[r][c];
    printf("Enter the array elements of Matrix A: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the array elements of Matrix B: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter the element at [%d][%d]",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("The Matrix after sum is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j] += brr[i][j];
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}