#include<stdio.h>
int main(){
    int r,c,max_sum=0,index;
    printf("Enter the rows and columns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter the array elements of Matrix A: \n");
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            printf("Enter the element at [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
        if(max_sum<sum)
        {
             max_sum=sum;
            index=i;
        }
    }
    printf("The Max sum of %d row elements is : %d",index+1,max_sum);



    return 0;
}