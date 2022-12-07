#include <stdio.h>

int main()
{
	int type, no;
	char size, ask;
	double price, tot=0, disc=0;
	
	do
	{
		printf("Input pizza type (1/2) : ");
		scanf("%d", &type);
		if (type==-1)
		{
			break;
		}
		else if (!(type==1||type==2))
		{
			printf("Invalid pizza type!\n");
			break;
		}
		
		printf("Input pizza size (L/M) : ");
		scanf(" %c", & size);
		if (!(size=='L'||size=='l'||size=='M'||size=='m'))
		{
			printf("Invalid pizza size!\n");
			break;
		}
		
		printf("Input the number of pizzza : ");
		scanf("%d", &no);
		
		if (size=='L'||size=='l')
		{
			switch (type) {
				case 1: price=1720.00;
						break;
				case 2: price=1820.00;
						break;
			}
		}
		else if (size=='M'||size=='m')
		{
			switch (type) {
				case 1: price=975.00;
						break;
				case 2: price=1000.00;
						break;
			}
		}
		
		tot=tot+price*no;
		puts("");
		
	} while (type!=-1);

	printf("\nAre you paying by a credit card (Y/N) : ");
	scanf(" %c", &ask);
	switch (ask) {
		case 'Y':
		case 'y': if (0.2>disc) {
				  	disc=0.2;
				  }
				  break;
		default : break;
	}
	
	printf("\nAre you a loyalty customer (Y/N) : ");
	scanf(" %c", &ask);
	switch (ask) {
		case 'Y':
		case 'y': if (0.15>disc) {
				  	disc=0.15;
				  }
				  break;
		default : break;
	}
	
	printf("\nIs this an online order (Y/N) : ");
	scanf(" %c", &ask);
	switch (ask) {
		case 'Y':
		case 'y': if (0.05>disc) {
				  	disc=0.05;
				  }
				  break;
		default : break;
	}
	
	printf("\nTotal Bill Amount : %.2lf", tot);
	printf("\nDiscount : %.2lf", tot*disc);
	printf("\nNet Amount : %.2lf", tot-tot*disc);
	
	
	return 0;
}
//35