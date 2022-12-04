#include <stdio.h>

struct Employee
{
	char employeeID[20], name[20];
	int exp;
	double salary;
	
}employee[3];

int main()
{
	int i;
	double incr[3]={0};
	
	for (i=0; i<3; i++)
	{
		printf("Enter employee %d EmployeeID : ", i+1);
		scanf("%s", &employee[i].employeeID);
		
		printf("Enter employee %d Name : ", i+1);
		scanf("%s", &employee[i].name);
		
		printf("Enter employee %d Experience : ", i+1);
		scanf("%d", &employee[i].exp);
		
		printf("Enter employee %d Salary : ", i+1);
		scanf("%lf", &employee[i].salary);
		
		puts("");
		
		if (employee[i].exp>2)
		{
			incr[i]=employee[i].salary*0.1;
		}
	}
	
	printf("\n\nEmployeeID\t Name\t\t Increment\n\n");
	for (i=0; i<3; i++)
	{
		printf("%s\t\t %s\t\t %.2lf\n", employee[i].employeeID, employee[i].name, incr[i]);
	}
	
	return 0;
}