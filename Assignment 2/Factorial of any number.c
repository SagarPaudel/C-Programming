#include<stdio.h>
  int main()
{
	int n, i=1, m =1;
	scanf("%d",&n);
	while ( i<=n)
	{
	m=i*m;	
	i++;
	}
	printf("%d! is = %d\n",n,m);

}