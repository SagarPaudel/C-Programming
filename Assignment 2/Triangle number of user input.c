#include<stdio.h>
int main()
{
	int a,i=1, n=0;
	scanf("%d",&a);
	while(i<=a)
	{
		n+=i;
		i++;
		
	}
	printf("%d",n);
	return 0;
}