#include <stdio.h>

int main()
{
	double sales[5];
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("Input the sales of salesmen %d : ", i+1);
		scanf("%lf", &sales[i]);
		
		if (sales[i]<0)
		{
			printf("Pls re-enter the amount\n\n");
			i--;
		}
	}
	
	printf("\n\nSalesmen who get the Rs.5000.00 allowance\n\nSales person no.\t Sales amount\n");
	for (i=0; i<5; i++)
	{
		if (sales[i]>=20000.00)
		{
			printf("%d\t\t\t %.2lf\n", i+1, sales[i]);
		}
	}
	
	return 0;
}