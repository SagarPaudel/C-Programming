#include<stdio.h>
int main(){
	int ary[]={1,2,3,4,5},i,j;
	for(i=0;i<5;++i){
		for(j=0;j<5;++j){
			if(ary[i]+ary[j]==5){
				printf("Numbers with sum 5 are %d + %d = %d\n",ary[i],ary[j],ary[i]+ary[j]);
			}
		}
	}
	return 0;
}