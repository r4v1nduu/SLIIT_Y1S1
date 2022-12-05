#include <stdio.h>
#include <assert.h>

float calDiscount(int time, float totAmount)
{
	if (time>=16 && time<=19)
	{
		if (totAmount>=2500 && totAmount<5000) {
			return totAmount*0.93;
		}
		else if (totAmount>=5000) {
			return totAmount*0.9;
		}
	}
	else if (time>=20 && time<=22)
	{
		if (totAmount>=2500 && totAmount<5000) {
			return totAmount*0.91;
		}
		else if (totAmount>=5000) {
			return totAmount*0.88;
		}
	}
}

void displayGift(float finalTot) 
{
	if (finalTot>=3000 && finalTot<5000) {
		printf("\nGift : Pack of 6 Eggs");
	}
	else if (finalTot>=5000 && finalTot<7000) {
		printf("\nGift : 1KG of Sugar");
	}
	else if (finalTot>=7000) {
		printf("\nGift : Pack of Milk");
	}
}

void testCalDiscount() {
	assert (calDiscount(16, 5000)==4500.0);
	assert (calDiscount(20, 2500)==2275.0);
}


int main()
{
	testCalDiscount();
	
	int hour;
	float amount, finalamount;
	
	while(1) 
	{
		printf("Enter the time (Only the Hour) (16-22) : ");
		scanf("%d", &hour);
		
		if (hour>=16 && hour<=22)
		{
			break;
		}
		printf("Invalid Time!\n");
	}
	
	printf("Enter total amount : ");
	scanf("%f", &amount);
	
	finalamount=calDiscount(hour, amount);
	printf("\n\nFinal Amount : %.2f", finalamount);
	
	displayGift(finalamount);
	
	return 0;
}
//25