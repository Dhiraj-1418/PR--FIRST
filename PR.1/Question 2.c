#include<stdio.h>
#include<conio.h>

void main()

{
	int HRA,DA,TA,BaseSalary,GrossSalary;
	
	printf("Enter Your Salary :");
	scanf("%d",&BaseSalary);
	
	HRA=BaseSalary*10/100;
	DA=BaseSalary*5/100;
	TA=BaseSalary*8/100;
	
	GrossSalary=BaseSalary+HRA+DA+TA;

	printf("Gross Salary =%d",GrossSalary);
	

	
	
	
	
}