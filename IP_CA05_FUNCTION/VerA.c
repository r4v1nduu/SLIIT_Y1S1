#include <stdio.h>

float calcIncrement(float salary, int noofYearsWorked)
{
	if (noofYearsWorked>2)
	{
		return salary*0.1;
	}
	else
	{
		return 0;
	}
}

float calcTotSalary (float salary, float increment)
{
	return salary+increment;
}

int main()
{
	float salary, increment, tot;
	int noofYearsWorked;
	
	printf("Enter salary : ");
	scanf("%f", &salary);
	printf("Enter No. of years worked : ");
	scanf("%d", &noofYearsWorked);
	
	increment=calcIncrement(salary, noofYearsWorked);
	
	tot=calcTotSalary(salary,increment);
	
	printf("\n\nIncrement : %.2f", increment);
	printf("\n\nTotal Salary : %.2f", tot);
	
	return 0;
}