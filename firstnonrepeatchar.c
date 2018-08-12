#include<stdio.h>
#include<conio.h>
void main(){
    char word[20],i,flag,j;
    printf("Enter the String: ");
    gets(word);

    for(i=0;i<strlen(word);i++){
        for(j=0;j<strlen(word);j++){
            if(word[i]==word[j]&&i!=j){
                flag=1;
                break;
            }
            else if(j==strlen(word)-1)
                flag=0;
        }
        if(flag==0){
            printf("%c is first non repeat char .\n",word[i]);
            break;
        }
    }
}
