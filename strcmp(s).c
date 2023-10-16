#include<stdio.h>
#include<stdio.h>
main()
{
	char str1[20]="HELLOTOPS";
	char str2[20]="hellotops";
	
	if(strcmp(str1,str2)==0)		//string comparision with case
//	if(strcmpi(str1,str2)==0)	used for ignoring the case with string comparision
	{
		printf("\n\n strings are equal........");
	}
	else
	{
		printf("\n\n strings are different......");
	}
}