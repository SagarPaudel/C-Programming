#include<stdio.h>
int main()
{
	int i, n=1, b=1  ;
	for (i=1 ; i<=5;i++)
	{
		printf("%d\t", b);
		n=n*10+1;
		b=n+b;
	}
}