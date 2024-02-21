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
    for(int i=0;i<n/2;i++){
        
        for(int j=0;j<n;j++){
            int a=n-1;
            if(j%2!=0){
                int temp = arr[i][j];
                arr[i][j]= arr[a][j];
                arr[a][j]=temp;
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