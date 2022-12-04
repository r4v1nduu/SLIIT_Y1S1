#include <stdio.h>

int main()
{
    /*
    pztp   = pizza type
    topp   = extra topping
    nopo   = number of pizzas
    chrg   = charge
    adchrg = additional charge
    */

    char size, ask;
    int pztp, topp, nopo;
    double chrg, adchrg, tot;

    printf("Available pizza options\n 1.Italiano\n 2.Cheesy Onion\n 3.Hot Garlic Prawns\nEnter the pizza option no. : ");
    scanf("%d", &pztp);
    printf("Enter the pizza size (P/M/L) : ");
    scanf("%*c%c",&size);
    

    if (size=='P' || size=='p')
    {
        switch (pztp)
        {
            case 1 : chrg=560.00;
                     break;
            case 2 : chrg=340.00;
                     break;
            case 3 : chrg=760.00;
                     break;
            default: printf("Invalid pizza option");
                     break;
        }
    }
    else if (size=='M' || size=='m')
    {
        switch (pztp)
        {
            case 1 : chrg=920.00;
                     break;
            case 2 : chrg=660.00;
                     break;
            case 3 : chrg=1100.00;
                     break;
            default: printf("Invalid pizza option");
                     break;
        }
    }
    else if (size=='L' || size=='l')
    {
        switch (pztp)
        {
            case 1 : chrg=1800.00;
                     break;
            case 2 : chrg=1300.00;
                     break;
            case 3 : chrg=2100.00;
                     break;
            default: printf("Invalid pizza option");
                     break;
        }
    }
    else
    {
        printf("Invalid pizza size");
	}

    printf("Enter the number of pizzas : ");
    scanf("%d", &nopo);
	
    tot=chrg*nopo;

    printf("Do you need any extra toppings? (Y/N) ");
    scanf("%*c%c",&ask);

    while(ask=='Y' || ask=='y')
    {
        if(ask=='Y' || ask=='y')
        {
            printf("Available Extra Toppings\n 1.Cheese \n 2.Olive\n 3.Bell Pepper\n 4.Pineapple\nEnter the extra topping no. : ");
            scanf("%d", &topp);

            switch (topp)
            {
                case 1 : adchrg=320.00;
                         break;
                case 2 : adchrg=140.00;
                         break;
                case 3 : adchrg=130.00;
                         break;
                case 4 : adchrg=150.00;
                         break;
                default: printf("Invalid additional topping no.");
                         break;
            }    
        }
        tot=tot+adchrg;
        
        printf("Do you need any extra toppings? (Y/N) ");
        scanf("%*c%c",&ask);
    }

    printf("Your Total Price : %.2lf", tot);

    return 0;
}