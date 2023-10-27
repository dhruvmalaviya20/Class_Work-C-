#include <stdio.h>
int main()
{
	char ch;
	printf("enter the alphabates: ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("vowel");
				break;
			
		
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("vowel");
				break;		
		default:
			printf("constant");
	}
	return 0;
}
