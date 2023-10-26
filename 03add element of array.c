//add element of an array..........
#include <stdio.h>
int main()
{
	int a[5],i,sum=0;
	for(i=0; i<5; i++)
	{
		printf("enter the number %d : ",i);
		scanf("%d",&a[i]);	
		sum += a[i];
	}
	printf("\nsum is : %d",sum);
	return 0;
}


