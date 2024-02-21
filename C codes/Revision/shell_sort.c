#include<stdio.h>
void shell_sort(int arr[],int n){
	for(int gap=n/2;gap>=1;gap=gap/2){
		for(int i=gap;i<n;i++){
			for(int j=i;j>=gap;j=j-gap){
				if(arr[j]<arr[j-gap]){
					int temp = arr[j];
					arr[j] = arr[j-gap];
					arr[j-gap] = temp;
				}
			}
			printf("Step: %d\n",i+1);
			for(int k=0;k<n;k++){
		printf("%d\t",arr[k]);
		}
	printf("\n");
		}
	}
}


int main(){
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array element: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	shell_sort(arr,n);
	printf("The final sorted array is: \n");
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}







