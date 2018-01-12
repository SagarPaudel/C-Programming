// To print blank lines of user input
#include<stdio.h>
int main(){
	int lin, num=1;
	printf("Input number of line blank\n");
	scanf("%d",&lin);
	do {
	   printf(" \n");
	   num++;
	}
	while(num<=lin);
return 0;
}
