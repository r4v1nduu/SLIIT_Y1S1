#include <stdio.h>

int main()
{
	/*
	stype = seat type
	sprod = searvice provider
	nos   = number of seats
	chrg  = charge
	*/

	char stype, ask='y';
	int sprod, chrg, nos;
	double cost, cost2, total;

	printf("[Fly_With_Me]\n\n");

	printf("Enter the seat type (E-Economy/B-Business) : ");
	scanf("%*c%c",&stype);

	printf("Available Service Providers\n 1 - Sri Lankan\n 2 - Emirates\n 3 - Thai Airways\n 4 - Air Asia\nEnter the service provider : ");
	scanf("%d", &sprod);

	printf("Enter the number of seats : ");
	scanf("%d", &nos);

	if (stype=='E' || stype=='e')
	{
		switch (sprod)
		{
			case 1 : cost=36500.00;
					 break;
			case 2 : cost=35800.00;
					 break;
			case 3 : cost=54600.00;
					 break;
			case 4 : cost=28500.00;
					 break;
			default: printf("\nInvalid service provider");
					 break;
		}
	}

	else if (stype=='E' || stype=='e')
	{
		switch (sprod)
		{
			case 1 : cost=77600.00;
					 break;
			case 2 : cost=76500.00;
					 break;
			case 3 : cost=84700.00;
					 break;
			case 4 : cost=42800.00;
					 break;
			default: printf("\nInvalid service provider");
					 break;
		}
	}

	else
	{
		printf("\nInvalid seat type");
	}


	total=cost*nos;

	while (ask=='Y' || ask=='y')
	{
		printf("Do you need any extra services (Y/N) : ");
		scanf("%*c%c",&ask);

		if (ask=='Y' || ask=='y')
		{
			printf("Available extra services\n 1 - Extra 10Kg Luggage\n 2 - Extra Meal\n 3 - Room at a Hotel\n 4 - Taxi Services\nInput the option you want : ");
			scanf("%d", &chrg);

			switch (chrg)
			{
				case 1 : cost2=7800.00;
					 	 break;
				case 2 : cost2=1500.00;
						 break;
				case 3 : cost2=19500.00;
						 break;
				case 4 : cost2=2000.00;
						 break;
				default: printf("\nInvalid extra service number");
						 break;
			}

			total=total+cost2;
		}
	}

	printf("\nYour total price : %.2lf", total);

	return 0;
}