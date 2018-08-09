#include<stdio.h>
void main(){
    int i,j,n,k;
    printf("Enter the no.");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf("%d",(n-i)+j);
        }
        printf("\n");
    }
}
