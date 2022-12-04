#include <stdio.h>

int main()
{
	int rcount, count, round, mark;
	double tot;

	printf("How many players are in the racce : ");
	scanf("%d", &rcount);

	for (count=1; count<=rcount; count++)
	{
		tot=0;

		printf("\n\nEnter the scores of Player %d (Between 0-5) : \n\n", count);

		for (round=1; round<=4; round++)
		{
			printf("Round %d - ", round);
			scanf("%d", &mark);

			if (mark>=0 && mark<=5)
			{
				tot=tot+mark;
			}
			else
			{
				printf("Enter scores Between 0 and 5 !\n");
				round--;
			}
		}

		printf("Average Score : %.2lf", tot/4.0);
	}

	return 0;
}