#include <stdio.h>

int main()
{
	double price[6]={0};
	int i;
	
	for (i=0; i<6; i++)
	{
		printf("Input the price of book %d : ", i+1);
		scanf("%lf", &price[i]);
		
		if (price[i]<=0)
		{
			printf("Please re-enter the amount\n\n");
			i--;
		}
		
		price[i]=price[i]*0.9;
	}
	
	printf("\n\nNew Price list\n\nBook ID\t\t Price\n\n");
	for (i=0; i<6; i++)
	{
		printf("%d\t\t %.2lf\n", i+1, price[i]);
	}
	
	return 0;
}