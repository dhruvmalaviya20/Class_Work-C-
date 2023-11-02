#include <stdio.h>
int main()
{
	int s1[4][4], s2[4][4], sub[4][4];
	int m, d;
	
	printf("enter the matrix one:");
	for(m=0; m<4; m++)
	{
		for(d=0; d<4; d++)
		{
			printf("\nenter the input for array[%d][%d]: ",m,d);
			scanf("%d",&s1[m][d]);
		}
	}
	
	printf("\n\nenter the matrix two:");
	for(m=0; m<4; m++)
	{
		for(d=0; d<4; d++)
		{
			printf("\nenter the input for array[%d][%d]: ",m,d);
			scanf("%d",&s2[m][d]);
		}
	}
	
	printf("\n\nprinting matrix one: \n");
	for(m=0; m<4; m++)
	{
		for(d=0; d<4; d++)
		{
			printf("%d \t",s1[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\nprinting matrix two: \n");
	for(m=0; m<4; m++)
	{
		for(d=0; d<4; d++)
		{
			printf("%d \t",s2[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	
	printf("\n\nprinting substriction: \n");
	for(m=0; m<4; m++)
	{
		for(d=0; d<4; d++)
		{
			sub[m][d]=s1[m][d]-s2[m][d];
			printf("%d \t",sub[m][d]);
		}
		printf("\n");
	}
	printf("\n\n");
	return 0;
}