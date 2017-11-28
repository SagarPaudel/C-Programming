#include<stdio.h>
#include<math.h>
int main()
{
	int i,p=1,x=7,a,z,n;
	scanf("%d", &z);
	for (i=1; i<=z; i++)
	{
		n=pow(x,p);
		a=a+n;
		p++;
	}
	printf("Sum of the series is = %d",a);
	return 0;
}