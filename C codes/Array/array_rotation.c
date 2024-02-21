#include<stdio.h>
void reverse(int arr[],int si,int ei)
{
    for(int i=si,j=ei;i<j;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return; 
}
int main(){
    int n,rot;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    printf("Enter the rotation place: ");
    scanf("%d",&rot);
    if(rot>n) rot%=n;
    reverse(arr,0,n-1);
    reverse(arr,0,rot-1);
    reverse(arr,rot,n-1);
    printf("The Array after rotation : ");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}