#include <stdio.h>

int main()
{
	int rtype, days;
	char card, acco;

	printf("Enter the type of room (1/2/3) : ");
	scanf("%d", &rtype);

	printf("Enter your accommodation basis (F/H) : ");
	acco = getchar();
	fflush(stdin);
	acco = getchar();
			
	printf("Enter No. of days : ");
	scanf("%d", &days);
			
	printf("Enter your reward card type (G/S/B) : ");
	card = getchar();
	fflush(stdin);
	card = getchar();
	
	printf("Values are %c %c", acco, card);
	
	return 0;
}