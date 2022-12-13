#include <stdio.h>

int main()
{
	int i, j, max[2], min[2];
	double maxusage=0, minusage, tot=0;
	double usage[4][7]={1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0,
						1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2,
						2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6,
						2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0};
	
	minusage=usage[0][0];
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<7; j++)
		{
			tot=tot+usage[i][j];
			
			if (usage[i][j]>maxusage)
			{
				maxusage=usage[i][j];
				max[0]=i;
				max[1]=j+1;
			}
			
			if (usage[i][j]<minusage)
			{
				minusage=usage[i][j];
				min[0]=i;
				min[1]=j+1;
			}
		}
	}
	
	printf("\nDay with Maximum Usage : %d", max[0]*7+max[1]);
	printf("\nMaximum Usage Unit : %.2lf", maxusage);
	printf("\nDay with Minimum Usage : %d", min[0]*7+min[1]);
	printf("\nMinimum Usage Unit : %.2lf", minusage);
	
	printf("\nTotal Usage for month : %.2lf", tot);
	printf("\nAverage Usage for month : %.2lf", tot/28.0);

	return 0;
}