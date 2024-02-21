#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int r=n-1;
    int arr[n],br[n];
    
    printf("Enter the array elements: ");
    for(int i=0,j=r;i<n;i++,r--){
        scanf("%d",&arr[i]);
        br[r] = arr[i];
    }


    for(int i=0;i<n;i++){
        printf("The element at %d is : %d\n",i+1,br[i]);
    }

    return 0;
}