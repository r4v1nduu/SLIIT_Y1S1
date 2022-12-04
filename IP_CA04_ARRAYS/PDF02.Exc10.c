#include <stdio.h>

int main()
{
	int boxes[4][3], volume[4], i;
	
	for (i=0; i<4; i++)
	{
		printf("Enter box %d Length : ", i+1);
		scanf("%d", &boxes[i][0]);
		
		printf("Enter box %d Width : ", i+1);
		scanf("%d", &boxes[i][1]);
		
		printf("Enter box %d Height : ", i+1);
		scanf("%d", &boxes[i][2]);
		
		puts("");
		
		volume[i]=boxes[i][0]*boxes[i][1]*boxes[i][2];
	}
	
	printf("\n\n");
	for (i=0; i<4; i++)
	{
		printf("Volume of box %d : %d\n", i+1, volume[i]);
	}
	
	return 0;
}