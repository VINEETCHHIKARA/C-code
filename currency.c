#include<stdio.h>
void main(){
    unsigned int amount,fifty=0,twinty=0,ten=0,five=0;
    printf("Enter the amount:");
    scanf("%d",&amount);
    if(amount>=50){
        fifty=amount/50;
        printf("%d 50\n",fifty);
        amount=(amount%50);
    }
    if(amount>=20){
        twinty=amount/20;
        printf("%d 20\n",twinty);
        amount=(amount%20);
    }
    if(amount>=10){
        ten=amount/10;
        printf("%d 10\n",ten);
        amount=(amount%10);
    }
    if(amount>=5){
        five=amount/5;
        printf("%d 5",five);
    }

}
