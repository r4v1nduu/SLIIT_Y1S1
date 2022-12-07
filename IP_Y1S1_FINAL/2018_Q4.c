#include <stdio.h>
#include <string.h>

int main()
{
	char empno[2][10], name[2][20], trash[20];
	int status, i, j, count=0;
	FILE *att1, *att2;
	
	att1=fopen("attendance.dat", "w");
	
	if (att1==NULL)
	{
		printf("Error creating the file!\n");
		return -1;
	}
	
	for (i=0; i<2; i++)
	{
		printf("Enter Employee %d's Employee No. : ", i+1);
		scanf("%s", &empno[i]);
		printf("Enter Employee %d's Name : ", i+1);
		scanf("%s", &name[i]);
		puts("");
		
		fprintf(att1, "%s\t %s\t ", empno[i], name[i]);
		
		for (j=0; j<7; j++)
		{
			printf("Enter Emplyee %d's Day %d attendace (1/0) : ", i+1, j+1);
			scanf("%d", &status);
			
			if (!(status==0||status==1))
			{
				printf("Invalid Value!\n");
				j--;
			}
			else
			{
				fprintf(att1, "%d  ", status);
			}
		}
		fprintf(att1, "\n");
		puts("");
	}
	
	fclose(att1);
	
	att2=fopen("attendance.dat", "r");
	
	printf("\n\nEnter Employee No. to Check : ");
	scanf("%s", empno[1]);
	
	while (!feof(att2))
	{
		fscanf(att2, "%s %s", &empno[2], &trash[20]);
		
		if (strcmp(empno[1], empno[2])==0)
		{
			for (j=0; j<7; j++)
			{
				fscanf(att2, "%d", &status);
				
				if (status==1)
				{
					count++;
				}
			}
		}
	}
	
	printf("\nEmployee No. %s's attendance : %d", empno[1], count);
	
	fclose(att2);
	
	return 0;
}
//40