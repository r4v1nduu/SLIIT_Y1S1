#include <stdio.h>

int main()
{
	int numArr[6], odd[6], even[6], i, x=0, y=0;
	
	printf("Enter 6 numbers to check :\n");
	for (i=0; i<6; i++)
	{
		scanf("%d", &numArr[i]);
		
		if (numArr[i]%2==0)
		{
			even[x]=numArr[i];
			x++;
		}
		else
		{
			odd[y]=numArr[i];
			y++;
		}
	}
	
	printf("\nEven Numbers :  ");
	for(i=0; i<x; i++)
	{
		printf("%d  ", even[i]);
	}
	
	printf("\n\nOdd Numbers  :  ");
	for(i=0; i<y; i++)
	{
		printf("%d  ", odd[i]);
	}
	
	return 0;
}