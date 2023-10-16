#include<stdio.h>
#include<stdio.h>
main()
{
	char str1[20]="TopsTech";
	char str2[20];
	
	strcpy(str2,str1);		
	//source to destination
	//str2 is a destination string.
	//str1 is a source string
	
	printf("\n\n string after copying : %s",str2);
}