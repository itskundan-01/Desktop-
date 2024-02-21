#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows of square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int transpose[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        printf("%d\t",transpose[i][j]);
        printf("\n");
    }
    for(int i=0;i<n;i++){
    int a=n-1; 
        for(int j=0;j<n/2;j++){
            int temp = transpose[i][j];
            transpose[i][j] = transpose[i][a];
            transpose[i][a] = temp;
            a--;
        }
    }




    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        printf("%d\t",transpose[i][j]);
        printf("\n");
    }
    return 0;
}