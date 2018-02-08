#include<stdio.h>
int main(){
	int num1, num2, xtra;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Numbers before swapping is %d and %d\n",num1, num2 );
	xtra= num1;
	num1=num2;
	num2=xtra;
	printf("Numbers after swapping is %d and %d ",num1,num2);
}