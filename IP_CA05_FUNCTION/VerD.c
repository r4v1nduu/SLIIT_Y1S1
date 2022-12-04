#include <stdio.h>

float calculateTotalCost(int itemNo, int quantity)
{
	if (itemNo==1) {
		return quantity*100.0;
	}
	else if (itemNo==2) {
		return quantity*200.0;
	}
	else if (itemNo==3) {
		return quantity*300.0;
	}
}

void printDetails(int itemNo, float quantity, float totalCost)
{
	printf("\n\nItem No. : %d\n\nQuantity : %.2f\n\nTotal Cost : %.2f", itemNo, quantity, totalCost);
}

int main()
{
	int itemNo;
	float quantity, totalCost;
	
	printf("Enter Item No. (1/2/3) : ");
	scanf("%d", &itemNo);
	
	if (itemNo>=1 && itemNo<=3) 
	{
		printf("Enter Quantity : ");
		scanf("%f", &quantity);
		
		totalCost=calculateTotalCost(itemNo, quantity);
		
		printDetails(itemNo, quantity, totalCost);
	}
	
	else {
		printf("\n\nInvalid Item No. !");
	}
	
	return 0;
}