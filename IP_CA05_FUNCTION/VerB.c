#include <stdio.h>

float getDiscountPrice(int noofGuests, float chargePerGuest)
{
	if (noofGuests>200)
	{
		return noofGuests*chargePerGuest*0.1;	
	}
	else
	{
		return 0;
	}
}

float getAmount(int noofGuests, float chargePerGuest, float discount)
{
	return noofGuests*chargePerGuest-discount;
}

int main()
{
	int noofGuests;
	float chargePerGuest, discount, tot;
	
	printf("Enter no. of Guests : ");
	scanf("%d", &noofGuests);
	printf("Enter charge per Guest : ");
	scanf("%f", &chargePerGuest);
	
	discount=getDiscountPrice(noofGuests, chargePerGuest);
	
	tot=getAmount(noofGuests, chargePerGuest, discount);
	
	printf("\n\nDiscount : %.2f", discount);
	printf("\n\nAmount to pay : %.2f", tot);
	
	return 0;
}