#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows or columns of square matrix[nxn]: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int a=n-1;
        for(int j=0;j<n/2;j++){
            if(i%2!=0){
                int temp = arr[i][j];
                arr[i][j]= arr[i][a];
                arr[i][a]=temp;
                a--;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           printf("%d\t",arr[i][j]); 
        }
        printf("\n");
    }
    
    
    return 0;
    
}