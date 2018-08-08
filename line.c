#include<stdio.h>
int main(){
	int a,j;
		for(a=1;a<20;a++){
			for(j=1;j<80;j++){
				if(j==40)
					printf("|");
                else if(a!=10)
                    printf(" ");
				if(a==10)
					printf("_");
			}
			printf("\n");
		}
	return 1;
}

