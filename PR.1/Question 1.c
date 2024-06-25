#include<stdio.h>
#include<conio.h>

void main()
{
	float C;
	float F;
	
	printf("Enter the tempereture in Celcius :");
	scanf("%f",&C);
	  
	F=(1.8 * C)+32;
	printf("Temperature in Fahrenheit :%.2ff ", F);
}