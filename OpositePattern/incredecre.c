#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter the no.");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
                if(i<=(n/2))
                    printf("%d",i);
                else
                    printf("%d",n-i+1);
        }
        printf("\n");
    }
}
