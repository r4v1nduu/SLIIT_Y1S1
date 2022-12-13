#include <stdio.h>

int main()
{
	char name[20], tempname[20]; 
	int check, num, temp;
	FILE *loyal;
	
	loyal=fopen("loyalty.dat", "a+"); //Can use both r++ and a++
	if (loyal==NULL) 
	{
		printf("Error opening the file!\n");
		return -1;
	}
	
	printf("Enter customer name : ");
	scanf("%s", &name);
	printf("Enter customer number : ");
	scanf("%d", &num);
	
	while (!feof(loyal))
	{
		fscanf(loyal, "%d %s", &temp, &tempname);
			
		if (temp==num) 
		{
			printf("Loyalty Number Already Exists!\n");
			check=1;
			break;
		}
		else 
		{
			check=0;
		}
	}
		
	if (check==0) 
	{
		fprintf(loyal, "%d\t%s\n", num, name);
	}
		
	fclose(loyal);
	return 0;
}
//40