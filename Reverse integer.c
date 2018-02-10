// To reverse an integer
#include<stdio.h>
int main(){
	int num,revnum=0, i ;
	printf("Enter an integer\n");
	scanf("%d",&num);
	while(num!=0){
		    revnum = revnum*10 + num % 10; 
		    num=num/10;
	}
	printf("rev num= %d \n",revnum);
	return 0; 
}
