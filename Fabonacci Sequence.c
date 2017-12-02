#include<stdio.h>
int main()
{
	int a=0 , b=1,c,d,n; 
	printf("Enter the number of terms of the series = ");
	scanf("%d", &n);
	
	do{
		printf("%d\t",a);
        c = a+b;
		a=b;
		b=c;
		d++;
	}
	while (d<n);
	
	return 0;
}
