#include <stdio.h>

int main()
{
	int i, ino, n, s1, s2, s3, tot, high=0, win;

	printf("Enter the number of players : ");
	scanf("%d", &n);

	for (i=1; i<=n; i++)
	{
		printf("\nEnter Player No : ");
		scanf("%d", &ino);

		printf("Input Score 1	: ");
		scanf("%d", &s1);
		printf("Input Score 2	: ");
		scanf("%d", &s2);
		printf("Input Score 3	: ");
		scanf("%d", &s3);

		tot=s1+s2+s3;

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