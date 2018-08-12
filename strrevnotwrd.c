#include<stdio.h>
#include<conio.h>
void main(){
    char str[20],temp[20];
    int i,j,k,t;
    printf("Enter the santance :");
    gets(str);
    for(i=strlen(str)-1;i>=0;i--){
       if (str[i] == ' ') {
            str[i] = '\0';
        printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s", str);
}
