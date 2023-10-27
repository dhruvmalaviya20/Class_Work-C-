#include <stdio.h>
main()
{
	int num, sum=0, r;
	printf("enter the number for sum : ");
	scanf("%d",&num);
	while(num>0)
	{
		r=num%10;
		sum+=r;
		num=num/10;
	}
	printf("sum of the digits is: %d",sum);
}


//123/10
//10*10=100
//23*10=2
//3


//123%10, 10*10=100, r=23;
//23%10, 10*2=20, r=3;
//sum=sum+r;
//sum=0+3;
//sum=3