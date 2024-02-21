#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int gap,i,j;
    for(gap = n/2;gap>=1;gap/=2){
        for(i = gap;i<n;i++){
            for(j=i;j>=gap;j-=gap){
                if(a[j]<a[j-gap]){
                    int temp = a[j];
                    a[j] = a[j-gap];
                    a[j-gap] = temp;
                }
            }
        }
    }

    for( i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}