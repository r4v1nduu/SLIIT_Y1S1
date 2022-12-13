#include <stdio.h>

float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

int main()
{
	int grade;
	float salary, increment;
	
	printf("Enter basic salary : ");
	scanf("%f", &salary);
	printf("Enter Grade (1/2/3) : ");
	scanf("%d", &grade);
	
	increment=calculateIncrement(grade, salary);
	
	printf("\nIncrement : %.2f", increment);
	printf("\nTotal Salary : %.2f", calcTotSalary(salary, increment));
	
	return 0;
}


float calculateIncrement(int grade, float basicSalary) {	
	switch (grade) {
		case 1: return basicSalary*0.1;
				break;
		case 2: return basicSalary*0.15;
				break;
		case 3: return basicSalary*0.2;
				break;
		default:break;
	}
	
}

float calcTotSalary(float salary, float increment) {
	return salary+increment;
}