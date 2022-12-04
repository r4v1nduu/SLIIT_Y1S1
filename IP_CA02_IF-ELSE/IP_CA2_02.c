#include <stdio.h>

int main()
{
	int month;
	double sallr, bonus;

	printf("Enter the number of months worked : ");
	scanf("%d", &month);

	if (month<12)
	{
		printf("Enter the basic sallary : ");
		scanf("%lf", &sallr);
		
		if (month<6)
		{
			bonus=0;
		}
		else if (6<=month<12)
		{
			bonus=month*sallr;
		}
	}

	else if (month==12)
	{
		printf("Enter the basic sallary : ");
		scanf("%lf", &sallr);
		
		if (sallr<=45000.00)
		{
			bonus=(month*sallr)+sallr;
		}
		else if (sallr>45000.00)
		{
			bonus=month*sallr;
		} 
	}

	else
	{
		printf("\nInvalid number of months");
	}

	printf("\nBonus : %.2lf", bonus);

	return 0;
}