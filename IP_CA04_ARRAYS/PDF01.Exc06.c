#include <stdio.h>

int main()
{
	int rate[5]={0}, i, check;
	
	do
	{
		printf("Pls input the service rating (1-5) : ");
		scanf("%d", &check);
		
		if (check>=1 && check<=5)
		{
			rate[check-1]++;
		}
		else if (check==-1)
		{
			break;
		}
		else
		{
			printf("Input value is not in range !\n");
		}
		
	} while (check!=-1);
	
	printf("\n\nRating\t Number of response\n");
	for (i=0; i<5; i++)
	{
		printf("%d\t %d\n", i+1, rate[i]);
	}
	
	return 0;
}