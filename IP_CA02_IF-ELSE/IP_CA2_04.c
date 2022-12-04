#include <stdio.h>

int main()
{
	int ctype;
	double bill, disc, tot, final;

	printf("Enter the customer type (1-Loyalty/2-NonLoyalty) : ");
	scanf("%d", &ctype);

	if (ctype==1 || ctype==2)
	{
		printf("Enterthe bill amount : ");
		scanf("%lf", &bill);

		switch (ctype)
		{
			case 1 :
			{
				if (bill<=2500.00)
				{
					disc=0.95;
				}
				else if (bill>2500.00)
				{
					disc=0.9;
				}
				break;
			}
			case 2 :
			{
				if (bill>5000.00)
				{
					disc=0.9;
				}
				else
				{
					disc=1;
				}
				break;
			}
			default:
			{
				break;
			}
		}
		
		tot=bill*disc;
		final=bill-tot;

		printf("\nDiscount Amount : %.2lf \nFinal Bill Amount : %.2lf", final, tot);
	}

	else
	{
		printf("\nInvalid customer type");
	}

	return 0;
}