// Swapping of numbers in an array
#include<stdio.h>
int main(){
	int array1[100],array2[100],temp[100],num,i;
	printf("How many numbers to include in an array\n");
	scanf("%d",&num);
	printf("Enter %d data for array1\n",num);
	for(i=0;i<num; i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter %d data for array2\n",num);
	for(i=0;i<num; i++){
		scanf("%d",&array2[i]);
	}
	printf("Numbers before swappig is\n");
	printf("In array1: ");
	for (i=0;i<num;i++){
		   printf("%d ",array1[i]);
	}
	printf("\nIn array2: ");
	for(i=0;i<num;i++){
		printf("%d ",array2[i]);
	}
	for(i=0;i<num;i++){
		temp[i]=array1[i];
		array1[i]=array2[i];
		array2[i]=temp[i];
	}
	printf("\n \nnNumbers after swapping is\n");
	printf("In array1: ");
	for (i=0;i<num;i++){
		printf("%d ",array1[i]);
	}
	printf("\nIn array2: ");
	for  (i=0;i<num;i++){
		printf("%d ",array2[i]);
	}
	return 0;
}