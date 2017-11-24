#include <stdio.h>

void main()
{
	int a = 78;
	float b = 198.7856;
	
	//possible cases for conversion 
	
	float c = a / 7 ; /*a/7=11 (int) and float c makes 11.000000*/
	printf (" c = %f\n",c);
	
	float d = a/ 7.0; //a/7.0 (float) and float d makes 11.142858
    printf (" d = %f\n",d);
	
	float e = (float) a/ 7;
	printf (" e = %f\n",e);
	
	int f = b / 32 ;
	printf (" f = %i\n",f);
	
	float g = (int) b *4 ;
	printf (" g = %f\n",g);cls

	
	float h =  b * 4;
	printf (" h = %f\n",h)
	
	
}
