#include<stdio.h>
int main()
{
	// sum of the series uo to a term of  1+11+111+...
	int i,a, n=1, b=1  ;
	scanf("%d",&a);
	for (i=1 ; i<a;i++)
	{
		
		n=n*10+1;
		b=n+b;
	}
	printf("The sum of the series is =%d\t", b);
}