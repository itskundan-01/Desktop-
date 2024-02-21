#include<stdio.h>
int quick_sort(int arr[],int first, int last);
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array elements: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int count = quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    printf("%d\t",arr[i]);
    printf("\ntotal count: %d",count);
    return 0;
}

int quick_sort(int arr[],int first,int last)
{
    static int count=0;
    int pivot,i,j,temp;
    if(first<last)
    {
        pivot = first;
        i = first;
        j = last;
        while(i<j)
        {
            while(arr[i]<= arr[pivot]) i++;
            while(arr[j]>arr[pivot]) j--;
            if(i<j)
            {
                temp  = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                for(int k=0;k<=last;k++)
                printf("%d\t",arr[k]);
                printf("\n");
                // count++;
            }
        }
        temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp;
        for(int k=0;k<=last;k++)
        printf("%d\t",arr[k]);
        printf("\n");
        // count++;
        for(int k=first;k<j;k++){
            if(arr[k]>arr[k+1]){
                count++;
                quick_sort(arr,first,j-1);
                break;
            }
        }
        for(int k=j+1;k<last;k++){
            if(arr[k]>arr[k+1]){
                count++;
                quick_sort(arr,j+1,last);
                break;
            }
        }
    }
    return count;
}





































































































// #include<stdio.h>
// void quick_sort(int arr[],int first, int last);
// int main(){
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the Array elements: ");
//     for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//     quick_sort(arr,0,n-1);
//     for(int i=0;i<n;i++)
//     printf("%d\t",arr[i]);
//     printf("\n");
//     return 0;
// }

// void quick_sort(int arr[],int first,int last)
// {
//     int pivot,i,j,temp;
//     if(first<last)
//     {
//         pivot = first;
//         i = first;
//         j = last;
//         while(i<j)
//         {
//             while(arr[i]<= arr[pivot]) i++;
//             while(arr[j]>arr[pivot]) j--;
//             if(i<j)
//             {
//                 temp  = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//                 for(int k=0;k<=last;k++)
//                 printf("%d\t",arr[k]);
//                 printf("\n");
//             }
//         }
//         temp = arr[j];
//         arr[j] = arr[pivot];
//         arr[pivot] = temp;
//         for(int k=0;k<=last;k++)
//         printf("%d\t",arr[k]);
//         printf("\n");
//         quick_sort(arr,first,j-1);
//         quick_sort(arr,j+1,last);
//     }
// }