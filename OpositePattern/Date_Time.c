#include<stdio.h>
int input[12];
void Short(int length){
int i,j,temp;
for(i=0;i<length;++i)
{
for(j=i+1;j<length;++j)
{
if(input[i]>input[j])
{
temp=input[i];
input[i]=input[j];
input[j]=temp;
}
}
}
}
void main(){
int j,i,number,temp0=15,temp1=15,temp11=15,temp2=15,temp3=15,temp22=15,temp4=15,temp5=15,dd=00,mm=00,temp,size=12,hh=00,m=00;
printf("Enter 12 numbers in between 0 to 9 :");
for(j=0;j<size;j++){
scanf("%d",&number);
if(number/10==0){
input[j]=number;
}
else{
--j;
printf("Entered number is not in 0 - 9");
}
}

Short(size);

for(i=0;i<size;++i){
    if(input[i]==0)
        temp0=i;
    if(input[i]==1)
        if(temp1<15)
            temp11=i;
        else
            temp1=i;
    if(input[i]==2)
        temp2=i;

}
if(temp1<15&&temp2<15){
        mm=12;
        input[temp1]=input[11];
        input[temp2]=input[10];
        size=10;
        Short(10);
    }
    else if(temp11<15){
            mm=11;
        input[temp1]=input[11];
        input[temp11]=input[10];
        size=10;
        Short(10);
    }
    else if(temp0<15&&temp1<15){
        mm=10;
        input[temp1]=input[11];
        input[temp0]=input[10];
        size;
        Short(10);
    }
    else{
        mm=input[11];
        size=11;
    }
temp0=15,temp1=15,temp2=15;
for(i=0;i<size;i++){
    if(input[i]==0)
        temp0=i;
    if(input[i]==1)
        temp1=i;
    if(input[i]==2)
        temp2=i;
    if(input[i]==3)
        temp3=i;

}
if(temp3<15&&temp1<15){
        dd=31;
        input[temp3]=input[size-1];
        input[temp1]=input[size-2];
        size=size-2;
        Short(size);
    }else
    if(temp3<15&&temp0<15){
        dd=30;
        input[temp3]=input[size-1];
        input[temp0]=input[size-2];
        size=size-2;
        Short(size);
    }else
     if(temp2<15){
        dd=20+input[size-1];
        input[temp2]=input[size-1];
        size=size-1;
        Short(size);
    }else if(temp1<15){
        dd=10+input[size-1];
        input[temp1]=input[size-1];
        size=size-1;
        Short(size);
    }else{
        dd=input[size-1];
        size--;
    }

temp0=15,temp1=15,temp2=15,temp11=15;
for(i=0;i<size;++i){
    if(input[i]==0)
        temp0=i;
    if(input[i]==1)
        if(temp1<15)
            temp11=i;
        else
            temp1=i;
    if(input[i]==2)
        if(temp2<15)
            temp22=i;
        else
            temp2=i;
    if(input[i]==3)
        temp3=i;

}
if(temp2<15&&temp3<15){
        hh=23;
        input[temp1]=input[size-1];
        input[temp2]=input[size-2];
        size=size-2;
        Short(size);
    }
    else if(temp2<15&&temp22<15){
            hh=22;
        input[temp2]=input[size-1];
        input[temp22]=input[size-2];
        size=size-2;
        Short(size);
    }
    else if(temp2<15&&temp1<15){
        hh=21;
        input[temp2]=input[size-1];
        input[temp1]=input[size-2];
        size=size-2;
        Short(size);
    }
    else if(temp2<15&&temp0<15){
        hh=20;
        input[temp2]=input[size-1];
        input[temp0]=input[size-2];
        size=size-2;
        Short(size);
    }
    else if(temp1<15){
        hh=10+input[size-1];
        size=size-1;
        Short(size);
    }else{
        hh=input[size-1];
        size=size-1;
    }


temp0=15,temp1=15,temp2=15;
for(i=0;i<size;++i){
    if(input[i]==0)
        temp0=i;
    if(input[i]==1)
        temp1=i;
    if(input[i]==2)
        temp2=i;
    if(input[i]==3)
        temp3=i;
    if(input[i]==4)
        temp4=i;
    if(input[i]==5)
        temp5=i;

}
if(temp5<15){
        m=50+input[size-1];
    }
else if(temp4<15){
        m=40+input[size-1];
    }
else if(temp3<15){
        m=30+input[size-1];
    }
else if(temp2<15){
        m=20+input[size-1];
    }
else if(temp1<15){
        m=10+input[size-1];
    }
else
    m=input[size-1];
printf("%d,%d  %d:%d",mm,dd,hh,m);
}

