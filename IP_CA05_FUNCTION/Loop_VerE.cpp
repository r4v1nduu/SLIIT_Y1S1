#include <stdio.h>

int main()
{
	int mark, min, max=0;
	
	printf("Enter a mark (Exit:-99) : ");
	scanf("%d", &mark);
	min=mark;

	while(mark!=-99) 
	{
		if (mark>=0 && mark<=100) 
		{
			if (mark>max) {
				max=mark;
			}
			else if (mark<min) {
				min=mark;
			}
		}
		else {
			printf("Invalid mark!\n");
		}
		
		printf("Enter a mark (Exit:-99) : ");
		scanf("%d", &mark);
	}
	
	printf("\n\nMax : %d \n\nMin : %d", max, min);
	
	return 0;
}