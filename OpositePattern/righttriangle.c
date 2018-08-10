#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf(" ");
        }
        for(j=0;j<=n-i;j++)
            printf("*");
        printf("\n");
    }
}
