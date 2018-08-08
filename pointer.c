#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    sum(&a,&b,&c);
    printf("sum=%d",c);
}
void sum(int *a,int *b,int *c){
    *c=*a+*b;
}
