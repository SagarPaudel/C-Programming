#include<stdio.h>
#include<math.h>

int main()
{
	float rad, pi;
	pi= 3.14;
	printf ("Enter radius =");
	scanf("%g", & rad);
	float area = pi* pow(rad,2);
	float perimeter = 2 * pi * rad;
	printf(" Area = %g \n Perimeter =%g", area, perimeter);
	return 0;
