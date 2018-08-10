#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>0;j--)
            printf(" ");
        for(j=n;j>=i;j--){
               printf("%d",j);
        }
        for(k=j+2;k<=n;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}
