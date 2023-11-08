#include <stdio.h>

struct employee
{
	int emp_id;
	char emp_name[30];
	float emp_salary;
	
	struct department
	{
		float dep_no;
		char dep_name[30]
	}dep;
}emp;

main()
{
	emp.emp_id = 1224;
	strcpy(emp.emp_name,"Dhruv");
	emp.emp_salary = 45000;
	
	emp.dep.dep_no = 2;
	strcpy(emp.dep.dep_name,"Backend");
	printf("\n\n Employee id : %d",emp.emp_id);
	printf("\n\n Employee name : %s",emp.emp_name);
	printf("\n\n Employee salary : %.2f",emp.emp_salary);
	printf("\n\n Department no. : %.2f",emp.dep.dep_no);
	printf("\n\n Department name : %s",emp.dep.dep_name);
}