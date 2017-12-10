#include<stdio.h>
  int main()
{
	int n, i=1, factorial=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	if(n<0) //for negative integers
		printf("Factorial of negative numbers doesn't exists\n");
	else //for positive integers
	{
		for(i=1;i<=n;i++)
		{
			factorial*=i;
		}
		printf("The factorial of %d is = %d\n",n,factorial);
	}
	  return 0;
  }
