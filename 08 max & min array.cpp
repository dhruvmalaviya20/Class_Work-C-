//find minimum and maximum number in array.................
#include <stdio.h>
int main()
{
	int a[7],i,max,min;
	for(i=0; i<=7; i++)
	{
		printf("enter the num %d: ",i);
		scanf("%d",&a[i]);
	}
	max = a[0];
	min = a[0];
	for(i=0; i<=7; i++)
	{
		if(a[i]>=max)
		{
			max = a[i];	
		}
		else if(a[i]<=min)
		{
			min = a[i];
		}
	}
	printf("\nThe maximum number is : %d",max);
	printf("\nThe menimum number is : %d",min);
	return 0;
}