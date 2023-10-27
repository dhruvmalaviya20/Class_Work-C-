
#include <stdio.h>

#include<string.h>
main()
{
	char firststr[20], secondstr[20];
	
	printf("\nenter the first string: ");
	gets(firststr);
	printf("\nenter the second string: ");
	gets(secondstr);
	
	if (strcmp(firststr,secondstr)==0)
	{
		printf("\nfirst string and second string are equal");
	}
	else
	{
		printf("\nfirst string and second string are not equal");
	}
	
}