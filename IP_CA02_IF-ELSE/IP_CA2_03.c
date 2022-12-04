#include <stdio.h>

int main()
{
	int ctype, unit, u2;
	double cost;

	printf("Enter customer type (1-Domestic/2-Samurdhi) : ");
	scanf("%d", &ctype);

	if (ctype==1 || ctype==2)
	{
		printf("Enter the electricity units : ");
		scanf("%d", &unit);

		if (ctype==1)
		{
			if (unit<=100)
			{
				cost=unit*10;
			}
			else
			{
				u2=unit-100;
				cost=(1000.00+(u2*30.00))*1.2;
			}
		}
		else if (ctype==2)
		{
			if (unit<=100)
			{
				cost=unit*10;
			}
			else
			{
				u2=unit-100;
				cost=1000.00+(u2*30);
			}
		}

		printf("\nMonthly charge : %.2lf", cost);
		
	}

	else
	{
		printf("\nInvalid customer type");
	}

}