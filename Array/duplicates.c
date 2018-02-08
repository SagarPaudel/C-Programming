#include<stdio.h>
int main(){
	int ary[100],num,i ,j,count=0 ;
	printf("How many elements in the array? \n");
	scanf("%d",&num);
	printf("Enter elements of array\n");
	for(i=0;i<num;i++){
		scanf("%d",&ary[i]);
	}
	for (i=0;i<num;++i){
		for(j=0;j<i;++j){
			if(ary[i]==ary[j]){
				count++;
			}
		}
	}
	printf("Total repeated numbers are %d ",count);
	return 0;
}