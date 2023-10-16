#include<stdio.h>
int main() {
	char a,b,c,d,e,f,g,h;
	printf("1. clothing department\n");
	printf("2. food department\n");
	printf("3.cosmetic department\n");
	printf("selection of department\n");
	scanf("%d",&a);
	switch(a) {
		case 1:
			printf("avlailable department\n");
			printf("a. mans wear\n");
			printf("b. womens wear\n");
			printf("c. kids wear\n");
			scanf("%s",&b);
			switch(b)
			{
				case 'a':
					printf("avlailable department\n");
					printf("x.shirt\n");
					printf("y.pents\n");
					scanf("%c",&c);
				break;
				case 'b':
					printf("avlailable department\n");
					printf("x.tops\n");
					printf("y.skirts\n");
					scanf("%c",&d);
				break;
				case 'c':
					printf("avlailable department\n");
					printf("a.tshirt\n");
					printf("b.kepri\n");
					scanf("%c",&e);
				break;
			}
		break;
		{
		case 2:
			printf("a.southindian\n");
			printf("b.chinese\n");
			printf("c.italian\n");
			scanf("%s",&c);
			switch(c)
			{
			 	case 'a':
					printf("avlailable department\n");
					printf("a.dosa\n");
					printf("b.idli\n");
					scanf("%c",&f);
				break;
				case 'b':
					printf("avlailable department\n");
					printf("a.fried rice\n");
					printf("b.manchurian\n");
					scanf("%c",&g);
				break;
				case 'c':
					printf("avlailable department\n");
					printf("a.pizza\n");
					printf("b.pasta\n");
					scanf("%c",&h);
				break;
			}
		{
				case 3:
					printf("a.lipstic\n");
					printf("b.nailpolish\n");
					printf("c.blusher\n");
					scanf("%s",&d);
				    switch(d);
		}
		    {
		    	
					}		}
		break;		
		}
	}
