#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter the no.");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        for(j=i;j>0;j--){
            printf("%d",i);
        }
        printf("\n");
    }
}
