#include <stdio.h>
#include <assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();


int main()
{
	float amount, rate;
	int i;
	
	testTotalAmount();
	
	printf("Enter inital amount to be invested : ");
	scanf("%f", &amount);
	printf("Enter the annual interest rate : ");
	scanf("%f", &rate);
	puts("");
	
	for (i=1; i<=5; i++)
	{
		printf("\nAmount after year %d : %.2f", i, findTotalAmount(rate, amount));
		amount=findTotalAmount(rate, amount);
	}
	
	return 0;
}


float calcAnnualInterest(float interestRate, float amount) {
	return amount*interestRate/100.0;
}

float findTotalAmount(float interestRate, float amount) {
	return calcAnnualInterest(interestRate, amount)+amount;
}

void testTotalAmount() {
	assert(findTotalAmount(20.0, 1000.0)==1200.0);
	assert(findTotalAmount(50.0, 2000.0)==3000.0);
}
//20