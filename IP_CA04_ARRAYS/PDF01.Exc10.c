#include <stdio.h>

int main()
{
	double salaries[5]={-1};
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("Input the salary of employee %d : ", i+1);
		scanf("%lf", &salaries[i]);
		
		if (salaries[i]<0)
		{
			printf("Please re-enter the amount\n");
			i--;
		}
		
		if (salaries[i]<10000.00)
		{
			salaries[i]=salaries[i]*1.1;
		}
	}
	
	printf("\n\nEmplyee no.\t Salary\n\n");
	for (i=0; i<5; i++)
	{
		printf("%d\t\t %.2lf\n", i+1, salaries[i]);
	}
	
	return 0;
}