#include<stdio.h>
int main(){
    int n,t;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    //sorting the array
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }
    int mid;
    if(n%2!=0) mid = arr[n/2];
    else mid = arr[(n/2)-1 ]; 
    printf("The mid value is: %d",mid);
}