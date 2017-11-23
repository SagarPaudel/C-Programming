#include <stdio.h>
int main()
{
	int num, count=1 ,a;
	printf(" Multiplication table for ?? =");
	scanf("%i",&num);
	for (a=1; a<=10; a++) // while (count<=10) 
	{
		printf("%i X %i =%i\n",num,count,num*count);
		count++;
	}
	return 0;
}