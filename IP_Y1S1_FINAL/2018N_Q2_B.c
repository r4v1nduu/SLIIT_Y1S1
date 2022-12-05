//5.20
#include <stdio.h>

int main()
{
	char panel[4][4];
	int i, j;
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("Enter Row %d : Column %d Color : ", i, j);
			scanf(" %c", &panel[i][j]);
		}
	}
	
	printf("\n\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%c  ", panel[i][j]);
		}
		printf("\n");
	}
	
	printf("	\nRed Led Bulb Positions :  ");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			if (panel[i][j]=='R'||panel[i][j]=='r')
			{
				printf("[%d,%d]", i, j);
			}
		}
	}
	
	return 0;
}
//5.30