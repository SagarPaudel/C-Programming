#include<stdio.h>
int main()
{
	int a= 1, n=1, i =1;
	while (i <= 6)
	{
		printf("%d\t",n);
		
		n+=a;
		a= a+1;
		i++;
	}
	return 0;
}
		