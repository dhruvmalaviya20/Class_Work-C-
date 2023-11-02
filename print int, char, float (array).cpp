#include <stdio.h>
int main()
{
	float num[5];
	int arr[5];
	char name[5];
	
	
	
	printf("Enter the float numbers");
	for(int i=0; i<5; i++)
	{
		printf("\n float num[%d]: ",i);
		scanf("%f",&num[i]);
	}
	printf("\n list of float:");
	for(int i=0; i<5; i++)
	{
		printf("\nnum of float: %.1f",num[i]);		
	}
	
	
	
	
	printf("\n\n\n Enter the int numbers");
	for(int i=0; i<5; i++)
	{
		printf("\n int num[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n list of int:");
	for(int i=0; i<5; i++)
	{
		printf("\nnum of int: %d",arr[i]);
	}
	
	
	
	
	printf("\n\n\n Enter the characters");
	for(int i=0; i<5; i++)
	{
		printf("\n int num[%d]: ",i);
		scanf(" %c",&name[i]);		//name[i]=getchar();
	}
	printf("\n list of int:");
	for(int i=0; i<5; i++)
	{
		printf("\nnum of char: %c",name[i]);
	}
	return 0;
		
}