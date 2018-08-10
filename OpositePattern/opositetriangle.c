#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int number,i=1,j,ival,result[10],count=0;
float div,k;
printf("Enter the number:");
scanf("%d",&number);
for(j=1;j<=19;j++){
k=sqrt(j);
ival=(int)k;
if(ival!=k){
if(number%j==0){
result[i]=j;
count++;
i++;
}
}
}
printf("Output=%d",count);

}
