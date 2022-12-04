#include <stdio.h>

int main()
{
	int myArray[10], largeNum[10], i, x=0;
	double tot=0;
	
	printf("Enter 10 number to check :\n");
	for (i=0; i<10; i++)
	{
		scanf("%d", &myArray[i]);
		
		tot=tot+myArray[i];
	}
	tot=tot/10.0;
	
	for (i=0; i<10; i++)
	{
		if(myArray[i]>tot)
		{
			largeNum[x]=myArray[i];
			x++;
		}
	}
	
	printf("\n\nmyArray  :  ");
	for(i=0; i<10; i++)
	{
		printf("%d  ", myArray[i]);
	}
	
	printf("\n\nlargeNum :  ");
	for(i=0; i<x; i++)
	{
		printf("%d  ", largeNum[i]);
	}
	
	return 0;
}