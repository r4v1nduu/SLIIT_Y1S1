#include <stdio.h>

int main()
{
	int pcount=0, mark, round;
	double tot;
	char ask;

	do
	{
		tot=0;
		pcount++;

		printf("\nEnter the scores of Player %d (Between 0-4) : \n\n", pcount);
		
		for (round=1; round<=3; round++)
		{
			printf("Round %d - ", round);
			scanf("%d", &mark);

			if (mark>=0 && mark<=4)
			{
				tot=tot+mark;
			}
			else
			{
				printf("Enter marks Between 0 and 4 !\n");
				round--;
			}
		}

		printf("Average Score : %.2lf\n", tot/3.0);

		printf("\nDo you want to enter the scores of another player (Y/N) : ");
		scanf("%*c%c", &ask);

	} while (ask=='Y' || ask=='y');

	return 0;
}