#include<stdio.h>
int main()
{
	int a=1 ,i=1 ;
	printf(" TABLE OF TRIANGLE NUMBERS\n");
	printf("      n \t");
	printf(" sum from 1 to n \n");
	while (i <= 10 )
	{
		printf("      %d \t %d\n", i, a);
		i++;
		a+=i;
	}
	return 0;
}
		