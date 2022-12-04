#include <stdio.h>

struct Product
{
	int qty;
	char name[20], productId[20];
	double price;
	
}product[4];

int main()
{
	int i;
	double amount[4]={0}, tot=0; 
	
	for (i=0; i<4; i++)
	{
		printf("Enter product %d PrductID : ", i+1);
		scanf("%s", &product[i].productId);
		
		printf("Enter product %d Name : ", i+1);
		scanf("%s", &product[i].name);
		
		printf("Enter product %d Unit Price : ", i+1);
		scanf("%lf", &product[i].price);
		
		printf("Enter product %d Quantity Sold : ", i+1);
		scanf("%d", &product[i].qty);
		
		puts("");
		
		amount[i]=product[i].price*product[i].qty;
		tot=tot+amount[i];
	}
	
	printf("\n\nProductID\t Name\t\t Amount\n\n");
	for (i=0; i<4; i++)
	{
		printf("%s\t\t %s\t\t %.2lf\n", product[i].productId, product[i].name, amount[i]);
	}
	printf("\n\t\t\t Total : %.2lf", tot);
	
	return 0;
}