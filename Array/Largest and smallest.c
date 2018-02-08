#include<stdio.h>
int main(){
	int ary[100],num, i,largest, smallest;
	printf("Enter number of elements in array\n");
	scanf("%d",&num);
	printf("Enter elements of the array\n");
	for(i=0;i<num;++i){
		scanf("%d",&ary[i]);
	}
	smallest = largest = 0;
	for(i=0;i<num;++i){
		if(ary[i]>largest)
			largest = ary[i];
		if(ary[i]<smallest)
			smallest = ary[i];
	}
	printf("The largest among the numbers is array is: %d ",largest);
	printf("\nThe smallest among the numbers is array is: %d ",smallest);
	return 0;
}