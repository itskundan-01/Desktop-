#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    // printf("Enter the element to check its duplicate: ");
    // scanf("%d",&dup);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            {
                 printf("%d is the duplicate element in the array.\n",arr[i]);
                 flag=1;
            }
        }
    }

    if(flag==0) printf("No duplicate elements present in the array.");
    return 0;
}