// Code to find the maximum and minimum elements from 2D array with their index.
#include<stdio.h>
int main(){
    int m,n,max=0,min,a,b,c,d;
    printf("\nEnter the rows and columns: ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Enter the elements at [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
            if(i==0 && j==0){
                 min=arr[i][j];
                max=arr[i][j];
            }
            else {
                if(min>arr[i][j]){
                min=arr[i][j];
                c=i;
                d=j;
            }
            if(max<arr[i][j]) {
                max=arr[i][j];
            a=i;
            b=j;
        }
        }
        }
    }
    printf("The minimum element of this 2D array is %d at [%d][%d] index\n and,\n",min,c,d);
    printf("The maximum element in this 2D array is %d at [%d][%d] index\n",max,a,b);

    return 0;
}