#include <stdio.h>

int main()
{
	int pztp, qty;
	double cost, disc, tot;

	printf("Enter the pizza type (1-Vegetable/2-Chicken/3-Fish) : ");
	scanf("%d", &pztp);

	while (pztp!=-1)
	{
		if (pztp==1 || pztp==2 ||pztp==3)
		{
			printf("Enter the pizza quantity : ");
			scanf("%d", &qty);

			switch (pztp)
			{
				case 1 : cost=1000.00;
						 break;
				case 2 : cost=1600.00;
						 break;
				case 3 : cost=1400.00;
						 break;
				default: break;
			}


			if (qty>3)
			{
				switch (pztp)
				{
					case 1 : disc=0.9;
							 break;
					case 2 : disc=0.88;
							 break;
					case 3 : disc=0.85;
							 break;
					default: break;
				}
			}
			else
			{
				disc=1.0;
			}

			tot=cost*qty*disc;

			printf("Your Total Price : %.2lf \n\n", tot);
			
			printf("Enter the pizza type (1-Vegetable/2-Chicken/3-Fish) : ");
			scanf("%d", &pztp);
		}

		else
		{
			printf("\nInvalid pizza type !");
		}
	}

	return 0;
}