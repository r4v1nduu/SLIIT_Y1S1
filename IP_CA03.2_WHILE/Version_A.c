//This program is to calculate the boarding price in ABC hotel

#include <stdio.h>

//Function main begins program execution
int main()
{

    //Declare variables

	/*
	rtype = room type
	days  = number of days
	acco  = accomodation basis
	disc  = discount
	*/

	int rtype, days;
	char card, acco;
	double lastp, price, disc;
	
	printf("Enter the type of room (1/2/3) : "); //Getting user inputs for room type
	scanf("%d", &rtype);
	
	while(rtype!=-1)
	{
		if(rtype==1 || rtype==2 || rtype==3)
		{
			printf("Enter your accommodation basis (F/H) : "); //Getting user inputs for accomodation basis
			scanf("%*c%c",&acco);
			
			printf("Enter No. of days : "); //Getting user inputs for no. of days
			scanf("%d", &days);
			
			printf("Enter your reward card type (G/S/B) : "); //Getting user inputs for reward card type
			scanf("%*c%c",&card);


            //Calculating room price
			if (acco=='F' || acco=='f')
			{
				switch (rtype)
				{
					case 1 : price=25555.00;
							 break;
					case 2 : price=17500.00;
							 break;
					case 3 : price=9000.00;
							 break;
					default: break;
				}
			}
			else if (acco=='H' || acco=='h')
			{
				switch (rtype)
				{
					case 1 : price=17250.00;
							 break;
					case 2 : price=12250.00;
							 break;
					case 3 : price=7250.00;
							 break;
					default: break;
				}
			}
			else
			{
				printf("\nInvalid accommodation basis");
			}
			
                
                //Calculating discount
				if(card=='G' || card=='g')
					disc=87.5/100;
				else if(card=='S' || card=='s')
					disc=88.5/100;
				else if(card=='B' || card=='b')
					disc=90.5/100;
				else
					printf("\nInvalid type of discount card");
				
			lastp=price*disc*days;  //Calculating the last price
				
			printf("\nYour Amount is = %.2lf \n\n", lastp);  //Displaying the last price
		}
		else
		{
			printf("Invalid type of room\n");
		}
		
		printf("Enter the type of room (1/2/3) (-1)For_End : "); 
		scanf("%d", &rtype);
	}

	return 0;	
}
//End of function main