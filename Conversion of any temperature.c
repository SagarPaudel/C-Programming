#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	float cel, far, kel;
	int c;
	
	printf("1.)Conversion of Celsius scale\n");
	printf("2.)Conversion of Fahrenheit scale\n");
	printf("3.)Convesion of Kelvin scale\n");
	scanf("%i", &num);
	
	if(num == 1 ){
	    printf("1.) Celsius to Fahrenheit\n");
	    printf("2.) Celsius to Kelvin\n");
	    scanf("%i",&c);
	
	    if(c == 1){
		    printf("Enter temperature in Celsius =");
		    scanf("%f", &cel);
		    far = ((float)9/5)*cel +32;
   		    printf("Temperature in Fahrenheit is = %g F ", far);
	    }
	    else if(c == 2)
	    {
		    printf("Enter temperature in Celsius=");
		    scanf("%f", &cel);
		    kel = cel +273;
		    printf("Temperature in Kelvin is =%g K", kel);
	    }
	}
	else if(num==2){
		printf("1.) Fahrenheit to Celsius\n");
		printf("2.) Fahrenheit to Kelvin\n");
		scanf("%i", &c);
	    
        if(c == 1)
		{
            printf("Enter Temperature in Fahrenheit=");
            scanf("%f", &far);
			cel= (far-32)* (float) 5/9;
			printf("Temperature in Celsius is =%g C", cel);
		}
		else if(c == 2)
		{
            printf("Enter Temperature in Fahrenheit=");
            scanf("%f", &far);
            kel = ((float)5/9)*(far-32)+273;
            printf("Temperature in Kelvin is = %g K",kel);
		}	
	}
	else if(num==3){
		printf("1.) Kelvin to Celsius\n");
        printf("2.) Kelvin to Fahrenheit\n");
		scanf("%i",&c);
		
		if (c==1)
		{
			printf("Enter Temperature in Kelvin =");
		    scanf("%f",&kel);
			cel= kel-273;
			printf("Temperature in Celsius is = %g C",cel);
		}
		else  if(c == 2)
		{
			printf("Enter Temperature in Kelvin =");
			scanf("%f",&kel);
			far= ((float)9/5)*(kel-273)+32;
			printf("Temperature in Fahrenheit is =%g F",far);
		}
    }
}