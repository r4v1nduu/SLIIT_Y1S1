#include <stdio.h>

int main()
{
    /*
    ropt   = room option
    nofg   = number of guests
    ads    = addtinoal serveice
    chrg   = charge
    adchrg = additional charge
    */

    int ropt, nofg, days, ads;
    double chrg, adchrg, tot;
    char ask;
    
    printf("Room Options\n 1.Suit\n 2.Superior\n 3.Deluxe\nEnter the room option no. : ");
    scanf("%d", &ropt);
    printf("Enter the number of guests : ");
    scanf("%d", &nofg);
    printf("Enter the number of days : ");
    scanf("%d", &days);

    if (nofg==1 || nofg==2)
    {
        switch (ropt)
        {
            case 1 : chrg=45000.00;
                     break;
            case 2 : chrg=40000.00;
                     break;
            case 3 : chrg=37500.00;
                     break;
            default: break;
            
        }
    }
    else if (nofg==3 || nofg==4 || nofg==5)
    {
        switch (ropt)
        {
            case 1 : chrg=44000.00;
                     break;
            case 2 : chrg=38000.00;
                     break;
            case 3 : chrg=35000.00;
                     break;
            default: break;
            
        }
    }
    else
    {
        switch (ropt)
        {
            case 1 : chrg=43000.00;
                     break;
            case 2 : chrg=35000.00;
                     break;
            case 3 : chrg=32000.00;
                     break;
            default: break;
            
        }
    }

    tot=chrg*nofg*days;

    printf("Do you need any additional services (Y/N) : ");
    scanf("%*c%c",&ask);

    while (ask=='y' || ask =='Y')
    {
        if (ask=='y' || ask=='Y')
        {
            printf("Available Additional Tours\n 1.Safari\n 2.Bird Watching\n 3.Boat Ride\n 4.City Tour\nEnter the additional tour no. : ");
            scanf("%d", &ads);
            
			switch (ads)
            {
                case 1 : adchrg=3500.00;
                         break;
                case 2 : adchrg=1000.00;
                         break;
                case 3 : adchrg=1500.00;
                         break;
                case 4 : adchrg=2000.00;
                         break;
                default: printf("Invalid Option");
                         break;
            }
            tot=tot+adchrg;
        }
        else
            break;

        printf("Do you need any additional services (Y/N) : ");
        scanf("%*c%c",&ask);
    }

    printf("Your Total Price : %.2lf", tot);

    return 0;
}