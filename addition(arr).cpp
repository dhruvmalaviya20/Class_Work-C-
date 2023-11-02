#include <stdio.h>
int main()
{
	int a[3][3], b[3][3], sum[3][3];
	int m, d;
	
	printf("Enter the number for matrix one: ");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("\n enter the value for array[%d][%d]: ",m,d);
			scanf("%d",&a[m][d]);
		}
	}
	
	printf("\n\nEnter the number for matrix two: ");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("\n enter the value for array[%d][%d]: ",m,d);
			scanf("%d",&b[m][d]);
		}
	}
	
	printf("\n\nprinting matrix one: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("%d \t",a[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\nprinting matrix two: \n");
	for(m=0; m<3; m++)
	{
		for(d=0; d<3; d++)
		{
			printf("%d \t",b[m][d]);
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
			printf("%d \t",sum[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}