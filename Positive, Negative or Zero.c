#include<stdio.h>
int main()
{
	float n;
	printf("Enter any number ");
	scanf("%g",&n);
	if (n < 0)
	{
		printf (" The number is negative \n");
	}
	else if (n==0.0)
	{
		printf("The number is zero\n");
	}
	else if(n > 0)
	{
		printf ("The number is positive\n");
	}
	return 0;
}