#include<stdio.h>
int main()
{
	int i, n=1  ;
	for (i=1 ; i<=5;i++)
	{
		printf("%d\t", n);
		n=n*10+1;
	}
}