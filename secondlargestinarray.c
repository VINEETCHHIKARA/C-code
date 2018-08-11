#include<stdio.h>
void main(){
    int a[10],temp=0,seclarg=0,i;
    printf("Enter the array elements:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(temp>a[i]&&seclarg<a[i])
            seclarg=a[i];
        else if(temp<a[i]){
            if(temp>seclarg)
                seclarg=temp;
            temp=a[i];
        }
    }
    printf("%d is second larger",seclarg);
}
