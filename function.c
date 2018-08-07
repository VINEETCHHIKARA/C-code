#include<stdio.h>
int fun();
void main(){
	printf("Before the function\n");
	fun();
	printf("After function call\n");
}

int fun(){
	printf("in function\n");
}
