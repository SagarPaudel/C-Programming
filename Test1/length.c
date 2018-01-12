// convert inch to centimeter
#include<stdio.h>
int main(){
	float inch, centimeter;
	printf("Enter length in inch=");
	scanf("%f",&inch);
	centimeter=(100/39.37)*inch;
	printf("Given length in centimeter is %f",centimeter);
	return 0;
}
