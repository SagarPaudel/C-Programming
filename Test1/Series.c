/*To print 1
            3
            6
            10 
            15
            .
            sum to n */ 
#include<stdio.h>
int main(){
	int sum,i, num=1;
	printf("Enter a number=");
	scanf("%d",&num);
	for(i=1;i<=num;++i){
		sum=i+sum;
		printf("%d\n",sum);
	}
	return 0;
}
