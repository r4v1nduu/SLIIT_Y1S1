#include <stdio.h>

int main()
{
	int no, nights;
	char type, method, ask;
	double amount;
	
	do
	{
		printf("Enter room type (D/S/C/E/P) : ");
		scanf(" %c", &type);
		
		if (type=='D'||type=='d'||type=='S'||type=='s'||type=='C'||type=='c'||type=='E'||type=='e'||type=='P'||type=='p')
		{
			printf("Enter no. of rooms : ");
			scanf("%d", &no);
			printf("Enter no. of nights : ");
			scanf("%d", &nights);
			printf("Enter payment method (C/M) : ");
			scanf(" %c", &method);
		}
		else
		{
			printf("\nInvalid Room Type!");
			break;
		}
		
		switch (type) {
			case 'D':
			case 'd': amount=31000.0;
					  break;
			case 'S':
			case 's': amount=35000.0;
					  break;
			case 'C':
			case 'c': amount=50000.0;
					  break;
			case 'E':
			case 'e': amount=75000.0;
					  break;
			case 'P':
			case 'p': amount=100000.0;
					  break;
			default : break;
		}
		
		if (method=='C'||method=='c')
		{
			amount=amount*no*nights*0.9;
		}
		else
		{
			amount=amount*no*nights;
		}
		printf("\nTotal Amount : %.2lf", amount);
		
		printf("\n\nDo you want to continue : ");
		scanf(" %c", &ask);
		
	} while(ask=='Y'||ask=='y');
	
	
	return 0;
}