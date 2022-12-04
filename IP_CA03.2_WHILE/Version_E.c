#include <stdio.h>

int main()
{
    /*
    inst   = insuerance type
    chos   = choose family or individual
    noc    = number of children
    childc = cost for a children
    */

    char inst, chos, ask='Y';
    int noc;
    double chrg, childc, tot;

    while (ask=='Y' || ask=='y')
    {
        printf("Available Insuarance Types\n A.Arogya\n N.Niduk\n D.Digasiri\n S.Suwawewa\nEnter the insuarance type letter : ");
        scanf("%*c%c",&inst);
        printf("Family or Individual (F/I) : ");
        scanf("%*c%c",&chos);

        
        if (inst=='A' || inst=='a')
        {
            switch (chos)
            {
                case 'F' : 
                case 'f' : chrg=5200.00;
                           break;
                case 'I' : 
                case 'i' : chrg=4500.00;
                           break;
                default  : printf("Invalid Family/Individual value");
                           break;
            }
        }
        else if (inst='N' || inst=='n')
        {
            switch (chos)
            {
                case 'F' : 
                case 'f' : chrg=4300.00;
                           break;
                case 'I' : 
                case 'i' : chrg=3100.00;
                           break;
                default  : printf("Invalid Family/Individual value");
                           break;
            }
        }
        else if (inst=='D' || inst=='d')
        {
            switch (chos)
            {
                case 'F' : 
                case 'f' : chrg=4800.00;
                           break;
                case 'I' : 
                case 'i' : chrg=3600.00;
                           break;
                default  : printf("Invalid Family/Individual value");
                           break;
            }
        }
        else if (inst=='S' || inst=='s')
        {
            switch (chos)
            {
                case 'F' : 
                case 'f' : chrg=3800.00;
                           break;
                case 'I' : 
                case 'i' : chrg=3300.00;
                           break;
                default  : printf("Invalid Family/Individual value");
                           break;
            }
        }
        else
        {
            printf("Invalid insuarance type");
        }


        if (chos=='F' || chos=='f')
        {
            printf("Enter the no. of children : ");
            scanf("%d", &noc);

            if (noc>2)
            {
                childc=chrg*0.1*(noc-2);
            }
            else
            {
                childc=0;
            }
        }
        else
        {
            childc=0;
        }


        tot=chrg+childc;
        printf("Your Total Amount : %.2lf", tot);

        printf("\nDo You Want to continue (Y/N) : ");
        scanf("%*c%c",&ask);
        
    }


    return 0;
}