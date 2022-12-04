#include <stdio.h>

int main()
{
    int team1[3]={8, 3, 7}, team2[3], win[3], i, final1=0, final2=0;

    for (i=0; i<3; i++)
    {
        printf("Enter Team2 round%d marks : ", i+1);
        scanf("%d", &team2[i]);
        
        if (team1[i]>team2[i])
        {
            win[i]=1;
            final1++;
        }
        else
        {
            win[i]=2;
            final2++;
        }
    }

    printf("\nWinners:\n");
    for(i=0; i<3; i++)
    {
        printf("Round%d - Team %d \n", i+1, win[i]);
    }

    if (final1>final2)
    {
        printf("\nOveral winner : Team 1");
    }
    else
    {
        printf("\nOveral winner : Team 2");
    }
    
    return 0;
}