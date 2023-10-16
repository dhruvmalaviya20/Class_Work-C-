//program to find length of a string.............
#include <stdio.h>
int main()
{
	char c[50];
	int i = 0;
	printf("enter the number: ");
	scanf("%s",&c);
	while(c[i]!='\0')
	i++;
	{
		printf("\n total number of characters : %d",i);
	}
	return 0;
}