#include <stdio.h>

int main()
{
	int arrNum[6], i, check=1;
	
	printf("Enter values to the Array :\n");
	for (i=0; i<6; i++)
	{
		scanf("%d", &arrNum[i]);
	}
	for (i=1; i<6; i++)
	{
		if(arrNum[i]>=arrNum[i-1])
		{
			check=1;
		}
		else
		{
			check=0;
			break;
		}
	}
	
	if(check==1)
	{
		printf("\nNumbers are stored in ascending order");
	}
	else
	{
		printf("\nNumbers are not stored in ascending order !");
	}
	
	return 0;
}