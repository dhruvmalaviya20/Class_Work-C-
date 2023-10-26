#include <stdio.h>
int main()
{
	int arr[20], n, index, i;
	
	printf("\n\n input size of array: ");
	scanf("%d",&n);
	
	for(i=0; i<=n; i++)
	{
		printf("\n\n enter the number arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\n enter the number for remove an array: ");
	scanf("%d",&index);
	
	if(index>n)
	{
		printf("\n\n array index out of range....");
	}
	else
	{
		for(i=index; i<=n; i++)
		{
			arr[i]=arr[i+1];
		}
	}
	for(i=0; i<=n-1; i++)
	{
		printf("\n\n Array is a[%d]: %d",i,arr[i]);
	}
}