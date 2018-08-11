#include<stdio.h>
int c[5];
void main(){
    int b[5],i;
    static int a[5];
    for(i=0;i<5;i++){
        printf("%d %d %d %d\n",i,a[i],b[i],c[i]);
    }
}
