#include <stdio.h>

int main()
{
	int i, ino, count, n, s, tot, high=0, win;

	printf("Enter the number of players : ");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		tot=0;
		
		printf("\nEnter Player No : ");
		scanf("%d", &ino);

		for (count=1; count<=3; count++)
		{
			printf("Input Score %d	: ", count);
			scanf("%d", &s);

			tot=tot+s;
		}

		printf("Total Score	: %d\n", tot);

		if (tot>high)
		{
			high=tot;
			win=ino;
		}
	}

	printf("\nThe Winner is Player No. %d", win);

	return 0;
}