// Numbers of array in descending order
#include<stdio.h>
int main(){
	int ary[100],tem[100],i,j,ttln;
	printf("How many numbers to include in an array? \n");
	scanf("%d",&ttln);
	printf("Enter elements of an array\n");
	for (i=0;i<ttln;++i){
		scanf("%d",&ary[i]);
	}
	for (i=0;i<ttln;++i){
		for(j=i+1;j<ttln;++j){
		    if(ary[i]<ary[j]){
			    tem[i]=ary[i];
			    ary[i]=ary[j];
			    ary[j]=tem[i];
			}
		}
	}
	printf("Elements of array in ascending order is:\n");
	for(i=0;i<ttln;++i){
		printf("%d\n",ary[i]);
	}
	return 0;
}
