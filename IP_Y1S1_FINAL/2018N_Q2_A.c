//4.40
#include <stdio.h>

struct Data {
	int accno, type;
	char name[20];
	double amount;
	
}data[5];

int main()
{
	int i, max, min, onetimerun=0;
	double dtot=0, wtot=0, maxvalue, minvalue;
	
	for (i=0; i<5; i++)
	{
		printf("Enter customer %d Account No. : ", i+1);
		scanf("%d", &data[i].accno);
		printf("Enter customer %d Name : ", i+1);
		scanf("%s", &data[i].name);
		printf("Enter customer %d Transaction Type (W/D) : ", i+1);
		scanf(" %c", &data[i].type);
		printf("Enter customer %d Transaction Amount : ", i+1);
		scanf("%lf", &data[i].amount);
	
	
		if (data[i].type=='W'||data[i].type=='w')
		{
			wtot=wtot+data[i].amount;
			
			if (onetimerun==0) { 
				minvalue=data[i].amount;
				min=i;
				onetimerun=1;
			}
			if (data[i].amount<minvalue)
			{
				minvalue=data[i].amount;
				min=i;
			}
		}
		else if (data[i].type=='D'||data[i].type=='d')
		{
			dtot=dtot+data[i].amount;
			
			if (data[i].amount>maxvalue)
			{
				maxvalue=data[i].amount;
				max=i;
			}
		}	
	}
	
	printf("\n\nTotal Deposit Amount : %.2lf", dtot);
	printf("\nTotal Withdrawal Amount : %.2lf", wtot);
	printf("\nCustomer with Max Deposit amount : %s", data[max].name);
	printf("\nCustomer with Min Withdrawal amount : %s", data[min].name);
	
	return 0;
}
//5.20