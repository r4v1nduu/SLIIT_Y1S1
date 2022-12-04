#include <stdio.h>

int main()
{
	int intArr[10], positiveNum[10], negativeNum[10], i, x=0, y=0;
	
	printf("Enter 10 numbers to check :\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &intArr[i]);
		
		if (intArr[i]>=0)
		{
			positiveNum[x]=intArr[i];
			x++;
		}
		else
		{
			negativeNum[y]=intArr[i];
			y++;
		}
	}
	
	printf("\nPositive Numbers :  ");
	for(i=0; i<x; i++)
	{
		printf("%d  ", positiveNum[i]);
	}
	
	printf("\n\nNegative Numbers :  ");
	for(i=0; i<y; i++)
	{
		printf("%d  ", negativeNum[i]);
	}
	
	return 0;
}