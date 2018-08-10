#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n-i;j>0;j--)
            printf(" ");
        k=1;
        for(j=0;j<=i;j++){
               printf("%d",k);
               k++;
        }
        for(j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}
