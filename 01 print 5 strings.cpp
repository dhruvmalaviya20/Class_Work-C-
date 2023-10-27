#include <stdio.h>
main()
{
	char str [5][20];
	int i;
	
	for(i=0; i<=5; i++)
	{
		printf("\n\n input a string[%d]: ",i);
		gets(str[i]);
	}
	for(i=0; i<=5; i++)
	{
		printf("\n\n String[%d]: %s",i,str[i]);
	}
}








