#include <stdio.h>
//#include <string.h>

struct student
{
	int rollno;
	char name[30];
	float marks;
}stud[3];

main()
{
//	struct student stud;
	int i;
	for(i=0; i<3; i++)
	{
		printf("\n\n structure[%d]",i);
		printf("\n\n Enter rollno: ");
		scanf("%d",&stud[i].rollno);
		
		printf("\n\n Enter name: ");
		scanf("%s",&stud[i].name);
		
		printf("\n\n Enter marks: ");
		scanf("%f",&stud[i].marks);
	}
	
	printf("\n\n Roll no : %d",stud[i].rollno);
	printf("\n\n Name : %s",stud[i].name);
	printf("\n\n Marks : %.2f",stud[i].marks);
}