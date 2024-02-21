#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows or columns of square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[n][n];
    for(int i=0;i<n/2;i++){
        
        for(int j=0;j<n;j++){
            brr[i][j]=
        }
    }


    // for(int i=0;i<n;i++){
    // int a=n-1; 
    //     for(int j=0;j<n/2;j++){
    //         int temp = brr[j][i];
    //         brr[j][i] = brr[j][a];
    //         brr[j][a] = temp;
    //         a--;
    //     }
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",brr[i][j]);
        }
        printf("\n");
    }



    return 0;
}