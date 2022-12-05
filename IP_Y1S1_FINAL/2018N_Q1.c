#include <stdio.h>

int main()
{
	int i, h=0, m=0, f=0;
	char type;
	
	for (i=0; i<100; i++)
	{
		printf("Enter student %d course type (H/M/F) (X:Exit) : ", i+1);
		scanf(" %c", &type);
		
		if (type=='H'||type=='h'||type=='M'||type=='m'||type=='F'||type=='f')
		{
			switch (type) {
				case 'H':
				case 'h': h++;
						  break;
				case 'M':
				case 'm': m++;
						  break;
				case 'F':
				case 'f': f++;
						  break;
			}
		}
		else if (type=='X'||type=='x')
		{
			break;
		}
		else
		{
			printf("Invalid course type!\n");
			i--;
		}
	}
	
	printf("\n\nCourse Name\t\t\t\t Student Count\t\t Total Fee\n");
	printf("\nDiploma in Hospitality Management\t %d\t\t\t %.2lf", h, 1500.00*h);
	printf("\nDiploma in Marketing\t\t\t %d\t\t\t %.2lf",m , 2000.00*m);
	printf("\nDiploma in Finance\t\t\t %d\t\t\t %.2lf", f, 2500.00*f);
	
	return 0;
}
//20