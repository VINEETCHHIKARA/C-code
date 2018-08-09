#include<stdio.h>
void main(){
    int i,j,n,k=1;
    printf("Enter the no.of star in height:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
