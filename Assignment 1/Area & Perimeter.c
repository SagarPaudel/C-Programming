#include<stdio.h>
#include<math.h>
#define pi 3.14

int main()
{
	float rad;
	printf ("Enter radius =");
	scanf("%g", & rad);
	float area = pi* pow(rad,2);
	float perimeter = 2 * pi * rad;
	printf(" Area = %g \n Perimeter =%g", area, perimeter);
	return 0;
}
