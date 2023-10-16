#include<stdio.h>
main()
{
	char str[20];
	int len;
	
	printf("\n\n input string : ");
	gets(str);		//used to execute your program with space count................
	
	len=strlen(str);
	
	printf("\n\n string : ");
	puts(str);
	
	printf("\n\n The length of the string : %d",len);
}