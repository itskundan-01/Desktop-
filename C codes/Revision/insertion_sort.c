
#include<stdio.h>
void insertion_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
			
		}
		printf("Step: %d\n",i+1);
		for(int k=0;k<n;k++){
		printf("%d\t",arr[k]);
		}
	printf("\n");
}
}


int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements: ");
	for(int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	insertion_sort(arr,n);
	printf("The final Sorted Array is: \n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}

	return 0;
}




