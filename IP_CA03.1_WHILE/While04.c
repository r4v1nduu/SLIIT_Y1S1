#include <stdio.h>

int main()
{
	int btyp, qty;
	double cost, tot;

	printf("Enter the burger type (1-Reagular/2-Cheese/3-DoubleLayer) : ");
	scanf("%d", &btyp);

	while (btyp!=-1)
	{
		if (btyp==1 || btyp==2 || btyp==3)
		{
			printf("Enter the burger quantity : ");
			scanf("%d", &qty);

			switch (btyp)
			{
				case 1 : cost=500.00;
						 break;
				case 2 : cost=550.00;
						 break;
				case 3 : cost=600.00;
						 break;
				default: break;
			}
			

			tot=cost*qty;

			printf("Your Total Price : %.2lf \n\n", tot);
			
			printf("Enter the burger type (1-Reagular/2-Cheese/3-DoubleLayer) : ");
			scanf("%d", &btyp);
		}

		else
		{
			printf("\nInvalid pizza type !");
		}
	}

	return 0;
}