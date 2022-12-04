#include <stdio.h>

int main()
{
	double size[3][5], avgSize[3]={0};
	int i, j;
	
	for (i=0; i<3; i++)
	{
		printf("\nEnter chocolate ball sizes from machine %d :\n", i+1);
		for (j=0; j<5; j++)
		{
			scanf("%lf", &size[i][j]);
			
			avgSize[i]=avgSize[i]+size[i][j];
		}
		avgSize[i]=avgSize[i]/5.0;
	}
	
	printf("\n\n");
	for (i=0; i<3; i++)
	{
		printf("Average size of machine %d : %.2lf\n", i+1, avgSize[i]);
	}
	
	return 0;
}