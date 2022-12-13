#include <stdio.h>

int main()
{
	int i;
	char phone[20];
	double local, inter, roam, tot;
	FILE *charge;
	
	charge=fopen("charges.dat", "w");
	if (charge==NULL) {
		printf("\nCan't Create the File!");
		return-1;
	}
		
	for (i=1; i<=2; i++)
	{
		printf("Enter User %d phone no. : ", i);
		scanf("%s", &phone);
		printf("Enter User %d local charges : ", i);
		scanf("%lf", &local);
		printf("Enter User %d international charges : ", i);
		scanf("%lf", &inter);
		printf("Enter User %d roaming charges : ", i);
		scanf("%lf", &roam);
		puts("");
		
		fprintf(charge, "%s\t %.2lf\t %.2lf\t %.2lf\n", phone, local, inter, roam);

	}
	fclose(charge);
	
	charge=fopen("charges.dat", "r");
	if (charge==NULL) {
		printf("\nCan't Open the File!");
		return-2;
	}
	
	fscanf(charge, "%s %lf %lf %lf", &phone, &local, &inter, &roam);
	while (!feof(charge))
	{
		tot=0;		
		tot=local+inter+roam;
		
		printf("\n%s Number Total : %.2lf", phone, tot);
		
		fscanf(charge, "%s %lf %lf %lf", &phone, &local, &inter, &roam);
	}
	fclose(charge);	
	
	return 0;
}