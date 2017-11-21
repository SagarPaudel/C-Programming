#include <stdio.h>
int main()
{
	float a , b , c , d ;
	a = 3.31E-8;
	b = 2.01E-7;
	c = 7.16E-6;
	d = 2.01E-8;
	printf("the calculation for (a*b)/(c*d) is = %0.2e \n" , (a*b)/(c+d)); /*  value  is 0.000000009266 and %f makes it to 0.000000.*/
	return 0;
}
	
