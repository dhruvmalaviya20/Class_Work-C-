#include <stdio.h>
int main() {
	int a[1000],i,n,even=0,odd=0;

	printf("\nEnter size of the array : ");
	scanf("%d",&n);

	for(i=0; i<n; i++) 
	{
		printf("\nEnter elements in array a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	for(i=0; i<n; i++) 
	{
		if(a[i]%2==0)
			even++;
		else
			odd++;

	}
	printf("\neven numbers in array: %d",even);
	printf("\n odd numbers in array: %d",odd);


	return 0;
}