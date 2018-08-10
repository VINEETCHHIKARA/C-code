#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--)
            printf(" ");
        for(j=0;j<i;j++){
               printf("%d",i+j);
        }
        for(k=j+i-1;k>i;k--){
            printf("%d",k-1);
        }
        printf("\n");
    }
}
