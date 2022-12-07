#include <stdio.h>
#include <string.h>

int main()
{
	char name[20], num[20], temp[2][20];
	int check;
	FILE *loyal;
	
	loyal=fopen("loyalty.dat", "a+");
	if (loyal==NULL) {
		printf("Error opening the file!\n");
		return -1;
	}
	
	printf("Enter customer name : ");
	scanf("%s", &name);
	printf("Enter customer number : ");
	scanf("%s", &num);
			
	while (!feof(loyal))
	{
		fscanf(loyal, "%s %s", &temp[0], &temp[1]);
			
		if (strcmp(temp[0], num)==0) {
			check=1;
			break;
		}
		else {
			check=0;
		}
	}
		
	if (check==1) {
		printf("\nLoyalty Number Already Exists!\n");
	}
	else {
		fprintf(loyal, "%s\t%s\n", num, name);
	}
		
	fclose(loyal);
	return 0;
}