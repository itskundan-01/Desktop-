#include<stdio.h>
void insertion_sort(int [],int);

int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}

void insertion_sort(int a[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}