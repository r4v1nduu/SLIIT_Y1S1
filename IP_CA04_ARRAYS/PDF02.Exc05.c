#include <stdio.h>

int main()
{
    int marks[5][2], i, j;
    double finalMark[5]={0};

    for (i=0; i<5; i++)
    {
        for (j=0; j<2; j++)
        {
            printf("Enter student %d modue %d mark : ", i+1, j+1);
            scanf("%d", &marks[i][j]);
        }
        finalMark[i]=finalMark[i]+marks[i][0]*0.4+marks[i][1]*0.6;
    }

    for (i=0; i<5; i++)
    {
        printf("\nStudent %d final marks : %.2lf", i+1, finalMark[i]);
    }

    return 0;
}