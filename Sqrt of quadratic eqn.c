#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c, r1, r2 , det, img;
	printf("Enter the coefficient a,b,c (ax^2 + bx + c = 0) : ");
	scanf("%lf %lf %lf",&a,&b,&c);
	det = pow(b,2)-(4*a*c);
	
	// for real and different roots
	if(det>0)
	{
		r1= (-b + sqrt(det))/(2*a);
		r2= (-b - sqrt(det))/(2*a);
		printf(" root1 = %g \n root2 = %g",r1,r2);
	}
	// for real and same roots
	else if (det==0)
	{
		r1 = r2 = -b/(2*a);
		printf (" root1 = root2 = %g", r1);
	}
	// for imaginary roots
	else if (det<0)
	{
		r1 = -b/(2*a);
		img = (sqrt(-det))/(2*a);
		printf(" root1 = %g + %gi \n root2 = %g - %gi",r1, img,r1,img ); //imaginary roots are always in conjugate form
	}
	return 0 ;
}
	