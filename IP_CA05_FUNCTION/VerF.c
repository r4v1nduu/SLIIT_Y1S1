#include <stdio.h>
#include <assert.h>

double calculateAmount(int type, double initial)
{
	double rate;
	
	switch (type) {
		case 1: rate=0.04;
				break;
		case 2: rate=0.07;
				break;
		case 3: rate=0.1;
				break;
	}
	return initial+(initial*rate);
}

void printDetails(int type, double initial, double balance)
{
	printf("\nBalance at End of the Year : %.2lf", balance);
}

int checkEligibility(double balance)
{
	if (balance>=5000.0)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}


int main()
{
	int i, type;
	double initial, balance;
	
	assert(checkEligibility(5000.0)==1);
	assert(checkEligibility(4999.0)==2);
	
	for (i=1; i<=5; i++)
	{
		printf("Enter User %d Acc Type : ", i);
		scanf("%d", &type);
		printf("Enter User %d Balance : ", i);
		scanf("%lf", &initial);
		
		balance=calculateAmount(type, initial);
		printDetails(type, initial, balance);
		
		if (checkEligibility(balance)==1)
		{
			printf("\nEligible for Raffle Draw\n\n");
		}
		else if (checkEligibility(balance)==2)
		{
			printf("\nNot Eligible for Raffle Draw\n\n");
		}
	}
	return 0;
}