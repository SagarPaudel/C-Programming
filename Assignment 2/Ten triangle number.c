#include<stdio.h>
int main()
{
	int a=1,i=1;
	while (i<=10)      // for (i=2 ; i<=11 ; i++)
	{
		printf("%d \t",  a);
		i++;
		a+=i;
	}
	return 0;
}
