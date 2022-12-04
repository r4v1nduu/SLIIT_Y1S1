#include <stdio.h>

int main()
{
	int i, j, count=1;
	
	for (i=97; i<102; i++)
	{
		for (j=0; j<count; j++)
		{
			printf("%c", i);
		}
		puts("");
		count++;
	}
	
	return 0;
}