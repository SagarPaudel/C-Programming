#include<stdio.h>
int main()
{
	int i,m=1;
	printf(" N \t N! \n");
	for (i= 1; i <=10; i++)
	{
		m*=i;
		printf(" %d \t %d \n",i, m);
	}
	return 0;
}