#include<stdio.h>
#include<math.h>
int main()
{
	int a=1, i=1, n=1 ;
	printf("      n \t");
	printf(" n^2 \n");
	while (i <= 10 )
	{
		printf("      %d \t %d\n", i, n);
		i++;
		a+=1;
		 n= pow (a,2);
		
	}
	return 0;
}
		