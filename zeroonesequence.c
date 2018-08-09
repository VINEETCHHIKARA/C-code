#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the no.of star in height:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if((i+j)%2==0)
                printf("%d",1);
            else
                printf("%d",0);
        }
        printf("\n");
    }
}
