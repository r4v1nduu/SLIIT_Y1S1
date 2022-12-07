#include <stdio.h>

int main()
{
	int rating[3][4], i, j, maxno;
	double avg[3]={0}, max=0;
	
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("Enter Movie %d Reviewer %d's Rating : ", i+1, j+1);
			scanf("%d", &rating[i][j]);
			
			avg[i]=avg[i]+rating[i][j];
		}
		avg[i]=avg[i]/4.0;
		puts("");
	}
	
	printf("\nMovie\t Reviewer's Ratings\t Average Rating\n\n");
	for (i=0; i<3; i++)
	{
		printf("%d\t ", i+1);
		for (j=0; j<4; j++)
		{
			printf("%d   ", rating[i][j]);
		}
		printf("\t %.2lf\n", avg[i]);
		
		if (avg[i]>max)
		{
			max=avg[i];
			maxno=i;
		}
	}
	
	printf("\n\nMovie with Highest Rating : %d", maxno+1);
	
	return 0;
}
//20
