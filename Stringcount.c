#include<stdio.h>
void main(){
    char str[15];
    int i,j,count=0;
    printf("Enter the string value:");
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++){
        count=0;
        for(j=0;j<strlen(str);j++){

            if(str[i]==str[j]&&j<i){
                break;
            }
        else{
            if(str[i]==str[j])
                count++;
        }
        }
        if(count>0)
        printf("%c is %d times\n",str[i],count);
    }
}
