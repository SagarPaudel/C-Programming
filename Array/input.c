// To print 10 entered numbers
#include<stdio.h>
int main(){
	int num[10],i;
	printf("Enter ten integers\n");
	for (i=0;i<10;++i)
		scanf("%d",&num[i]);
	printf("Numbers entered are\n");
	for (i=0;i<10;++i)
		printf("%d\n",num[i]);
	return 0;
}