#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float r, v;
	printf("Enter radius =");
	scanf("%g",&r);
	v = (float) 4/3 * pi * pow(r,3);
	printf(" Volume = %g",v);
	return 0;
}
