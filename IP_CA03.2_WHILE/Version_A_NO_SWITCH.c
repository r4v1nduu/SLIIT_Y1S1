//This program is to calculate the boarding price in ABC hotel

#include <stdio.h>

//Function main begins program execution
int main()
{
	//Declare variables
	char a_basis, card;
	double cost, disc, total;
	int t_room, nod;
	
	printf("Enter type of room : "); //Getting user inputs for room type
	scanf("%d", &t_room);

	while(t_room!=-1)
	{
		if(t_room==1 || t_room==2 || t_room ==3)
		{
			printf("Enter Accomdation Basis (F/H) : "); //Getting user inputs for accomodation basis
			scanf("%*c%c",&a_basis);
	
			printf("Enter No of days : ");  //Getting user inputs for no. of days
			scanf("%d",&nod);
	
			printf("Enter Rewatd card type : "); //Getting user inputs for reward card type
			scanf("%*c%c",&card);
	

			//Calculating room price for full board

			if(a_basis=='F' || a_basis=='f')
			{
				if(t_room==1)
				{
					cost = 25555.00;
				}
				else if(t_room==2)
				{
					cost = 17500.00;
				}
				else if(t_room==3)
				{
					cost = 9000.00;
				}
				else
				{
					printf("Invalid room type");
				}
			}

			//Calculating room price for half board

			else if(a_basis=='H' || a_basis=='h')
			{
				if(t_room==1)
				{
					cost = 17250.00;
				}
				else if(t_room==2)
				{
					cost = 12250.00;
				}
				else if(t_room==3)
				{
					cost = 7250.00;
				}
				else
				{
					printf("\nInvalid room number");
				}
			}
			else
			{
				printf("\nInvalid accomadation basis");
			}
	
			
			//Calculating discount

			if(card=='G' || card=='g')
			{
				disc = 12.5;
			}
			else if(card=='S' || card=='s')
			{
				disc = 11.5;
			}
			else if(card=='B' || card=='b')
			{
				disc = 9.5;
			}
			else
			{
				printf("\nInvalid card type");
			}
	
			
			total = cost * (double)nod * (100.00-disc)/100; //Calculating the last price

			printf("\nThe total is %.2lf ", total); //Displaying the last price
		}

		else
		{
			printf("Invalid room type \n");	
		}

		printf("\n\nEnter type of room | (-1) for End : "); //Getting user inputs for room type again
		scanf("%d", &t_room);
	}

	return 0;
}
//End of function main