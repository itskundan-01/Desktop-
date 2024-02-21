#include<stdio.h>
int  main(){
    int n;
    printf("Enter  the limit to generate pythagorean triplet: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int c=1;c<=n;c++){
                if(i*i + j*j ==c*c){
                    printf("(%d, %d, %d)\n\n",i,j,c);
                }
            }
    }
}
    return 0;
}