#include <stdio.h>

struct Book
{
	char bookID[20], title[20];
	int copy, readr;
	
}book[3];

int main()
{
	int i, top=0, num;
	
	for (i=0; i<3; i++)
	{
		printf("Enter book %d BookID : ", i+1);
		scanf("%s", &book[i].bookID);
		
		printf("Enter book %d Title : ", i+1);
		scanf("%s", &book[i].title);
		
		printf("Enter book %d No. of Copies : ", i+1);
		scanf("%d", &book[i].copy);
		
		printf("Enter book %d No. of Readers : ", i+1);
		scanf("%d", &book[i].readr);
		
		puts("");
		
		if (top<book[i].readr)
		{
			top=book[i].readr;
			num=i;
		}
	}
	
	printf("\n\nMost Popular Book");
	printf("Name of the book : %s \nNumber of readers : %d", book[num].title, num+1);
	
	return 0;
}