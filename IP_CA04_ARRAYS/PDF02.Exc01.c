#include <stdio.h>

int main()
{
    int OTHours[5]={20, 22, 25, 19, 20}, i, emp;
    double OTrate[5], tot[5]={0}, high=0;

    for (i=0; i<5; i++)
    {
        printf("Enter employee %d OT Rate : ", i+1);
        scanf("%d", &OTrate[i]);

        tot[i]=OTrate[i]*OTHours[i];

        if (high<tot[i])
        {
            high=tot[i];
            emp=i+1;
        }
    }

    printf("\nEmployee who earned highest payment : %d", emp);

    return 0;
}