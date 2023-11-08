#include<stdio.h>

struct student
{
	int rollno;
	char name[20];
}

main()
{
	struct student s1; //"s1" is structure var.
	
	struct student s2;
	
	s1.rollno=101;
	strcpy(s1.name,"DHRUV");
	printf("\n\n ......... Info of student1 ...........");
	printtf("\n\n Roll no : %d",s1.rollno);
	printtf("\n\n Name : %s",s1.name);
	
	s2.rollno=102;
	strcpy(s2.name,"BRIJES");
	printf("\n\n ........... Info of student2 .............");
	printtf("\n\n Roll no : %d",s2.rollno);
	printtf("\n\n Name : %s",s2.name);
}