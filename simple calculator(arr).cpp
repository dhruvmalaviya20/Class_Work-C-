#include <stdio.h>
int main()
{
	float a[3][3], b[3][3], sum[3][3], sub[3][3], mul[3][3], div[3][3];
	int m, d;
	
	printf("Enter the number for matrix one: ");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("\n enter the value for array[%d][%d]: ",m,d);
			scanf("%f",&a[m][d]);
		}
	}
	
	printf("\n\nEnter the number for matrix two: ");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("\n enter the value for array[%d][%d]: ",m,d);
			scanf("%f",&b[m][d]);
		}
	}
	
	printf("\n\nprinting matrix one: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("%f \t",a[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\nprinting matrix two: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("%f \t",b[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\nprinting sum: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			sum[m][d]=a[m][d]+b[m][d];
			printf("%f \t",sum[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\nprinting sub: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			sub[m][d]=a[m][d]-b[m][d];
			printf("%f \t",sub[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\nprinting mul: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			mul[m][d]=a[m][d]*b[m][d];
			printf("%f \t",mul[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\nprinting div: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			div[m][d]=a[m][d]/b[m][d];
			printf("%.1f \t",div[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}