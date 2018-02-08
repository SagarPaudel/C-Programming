// Sum of elements of an array
#include<stdio.h>
int main(){
	int num[100],i, ttln; 
	int sum=0;
	printf("How many numbers to input?\n");
	scanf("%d",&ttl);
	printf("Enter numbers in an array\n");
	for(i=0; i<ttln;++i){
		scanf("%d",&num[i]);
	}
	for(i=0;i<ttln;++i){
		sum+= num[i];
	}
	printf("the sum is %d",sum);
	return 0;

}