// To print blank lines of user input
#include<stdio.h>
int main(){
	int line, num=1;
	printf("Input number of line blank\n");
	scanf("%d",&line);
	do {
	   printf(" \n");
	   num++;
	}
	while(num<=line);
return 0;
}
