#include<stdio.h>
#include<math.h>
int main()
	//sum of the series of x+ x^2 + x^3 ....
{
	int i,p=1,a,z,n;
	printf("Enter the value of z =");
	scanf("%d", &z);
	for (i=1; i<=z; i++)
	{
		n=pow(z,p);
		a=a+n;
		p++;
	}
	printf("Sum of the series is = %d",a);
	return 0;
}
