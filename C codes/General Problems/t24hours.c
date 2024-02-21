#include<stdio.h>
int main(){
    int n;
    printf("Enter the Hour time(24-Hour format): ");
    scanf("%d",&n);
    if(n<0 || n>23){
        printf("Invalid Hour input !! ");
        return -1;
    }
    if(n>1 && n<12) printf("Morning\n");
    else if(n>=12 && n<=17) printf("Afternoon\n");
    else if(n>17 && n<=22) printf("Evening\n");
    else if(n>22 || n<=1) printf("Night\n");
    return 0;
}