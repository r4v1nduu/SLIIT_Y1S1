#include <stdio.h>

int main()
{
	int seat[10]={0}, i, check;
	
	do
	{
		printf("Pls input the seat number (1-10) : ");
		scanf("%d", &check);
		
		if (check>=1 && check<=10)
		{
			switch (seat[check-1])
			{
				case 0: seat[check-1]=1;
						break;
				case 1: printf("Sorry! The seat %d is reserved\n\n", check); 
						break;
			}
		}
		else if (check==-1)
		{
			break;
		}
		else
		{
			printf("Sorry! Pls Input a valid seat number\n\n");
		}
		
	} while(check!=-1);
	
	printf("\n\nReserved seat numbers : ");
	for (i=0; i<10; i++)
	{
		if (seat[i]==1)
		{
			printf("%d  ", i+1);
		}
	}
	
	return 0;
}