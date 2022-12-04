#include <stdio.h>

int main()
{
	int num[8], i, count=0;
	
	printf("Enter 8 numbers (between 1-4) :\n");
	for (i=0; i<8; i++)
	{
		scanf("%d", &num[i]);
		
		if (num[i]<1 || num[i]>4)
		{
			printf("Re-enter the number !\n");
			i--;
		}
	}
	
	for (i=0; i<8; i++)
	{
		if (num[i]==1 && num[i+1]==3)
		{
			count++;
		}
	}
	
	printf("\nNumber of times pattern '1 3' appered : %d", count);
	
	return 0;
}