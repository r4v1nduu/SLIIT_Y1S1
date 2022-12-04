#include <stdio.h>

int main()
{
    int i=0, num;
    double qtySold[3], item[3]={90.00, 20.00, 55.00}, tot[5]={0}, low;

    for (i=0; i<3; i++)
    {
        printf("Enter item %d sold qunatity : ", i+1);
        scanf("%d", &qtySold[i]);

        tot[i]=qtySold[i]*item[i];
        
        if (i==0)
        {
        	low=tot[i];
		}

        if (tot[i]<low)
        {
            low=tot[i];
            num=i+1;
        }
    }

    printf("\nItem generates least income : %d", num);

    return 0;
}