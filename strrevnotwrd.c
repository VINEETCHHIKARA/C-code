#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char str[30];
    int i;
    printf("Enter the sentence :");
    gets(str);
    for(i=strlen(str)-1;i>=0;i--){
       if (str[i] == ' ') {
            str[i] = '\0';
        printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s", str);
}
