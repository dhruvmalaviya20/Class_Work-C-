//#include<stdio.h>
//main()
//{
//	int i,j,a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//	for(i=0;i<4;i++)
//	{
//		for(j=0;j<4;j++)
//		{
//			printf(" %d ",a[i][j]);
//		}
//		printf("\n");
//	}
//}



#include<stdio.h>
main()
{
	int i,j,a[3][4]={{10,11,12,13},{14,15,16,17},{18,19,20,21}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}