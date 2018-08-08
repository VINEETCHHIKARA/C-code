#include<stdio.h>
int fact(int);
void main(){
    int n;
    printf("Enter a number for factorial :");
    scanf("%d",&n);
    n=fact(n);
    printf("factorial =%d",n);
}
int fact(int n){
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}
