#include <stdio.h>

float calculateWeeklySalary(int grade, float hrsWorked)
{
	if (grade==1) {
		return hrsWorked*100.0;
	}
	else if (grade==2) {
		return hrsWorked*200.0;
	}
	else if (grade==3) {
		return hrsWorked*300.0;
	}
}

void printDetails(int grade, float hrsWorked, float salary)
{
	printf("\n\nGrade : %d\n\nHRs Worked : %.2f\n\nWeekly Salary : %.2f", grade, hrsWorked, salary);
}

int main()
{
	int grade;
	float hrsWorked, salary;
	
	printf("Enter grade (1/2/3) : ");
	scanf("%d", &grade);
	
	if (grade>=1 && grade<=3) 
	{
		printf("Enter hours worked : ");
		scanf("%f", &hrsWorked);
		
		salary=calculateWeeklySalary(grade, hrsWorked);
		
		printDetails(grade, hrsWorked, salary);
	}
	
	else {
		printf("\n\nInvalid Grade !");
	}

	return 0;
}