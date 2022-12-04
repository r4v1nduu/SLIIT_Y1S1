#include <stdio.h>

int main()
{
	int btype, days;
	double rent, fine, tot;

	printf("Enter the book type (1-Computer_Related / 2-Others) : ");
	scanf("%d", &btype);

	if (btype==1 || btype==2)
	{
		
		printf("Enter the no. of days rented : ");
		scanf("%d", &days);

		switch (btype)
		{
			case 1 : rent=10.00;
					 break;
			case 2 : rent=8.00;
					 break;
		}

		if (days>14)
		{
			fine=1.10;
		}
		else
		{
			fine=1.00;
		}

		tot=days*rent*fine;

		printf("\nRental per Day : %.2lf \nRental Amount : %.2lf", rent, tot);
	}

	else
	{
		printf("\nInvalid book type");
	}

	return 0;
}
