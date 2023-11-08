#include <stdio.h>
#include <string.h>

struct student	
{
	int rollno;
	char name[30];
	float marks;
}stud;

main()
{
//	struct student stud;
	
	stud.rollno=111;
	strcpy(stud.name,"Rahul");
	stud.marks=88;
	
	printf("\n\n Roll no : %d",stud.rollno);
	printf("\n\n Name : %s",stud.name);
	printf("\n\n Marks : %f",stud.marks);
}