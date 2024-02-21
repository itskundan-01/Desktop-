#include<stdio.h>
int main(){
	int n,min,s_min;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	s_min=arr[0]+1;
	for(int i=0;i<n;i++) if(arr[i]<min) min= arr[i];
	for(int i=0;i<n;i++){
		if(arr[i]<s_min && arr[i] != min)
		s_min=arr[i];
	}
	printf("The second smallest element of array is: %d\n",s_min);
	return 0;
}