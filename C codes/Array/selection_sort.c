#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int min = INT_MAX,minidx = -1;
        for(int j=i;j<n;j++){
            if(min>a[j]){
                min = a[j];
                minidx = j;
            }
        }
        int temp = a[minidx];
        a[minidx] = a[i];
        a[i] = temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}