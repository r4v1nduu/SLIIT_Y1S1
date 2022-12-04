#include <stdio.h>

float angleInDegrees, radian;

float findRadianValue(float angleInDegrees) {
	return angleInDegrees*22.0/(7*180);
	}

void printRadianValues() {
	printf("Angle in radians : %.2f", radian);
}

int main()
{	
	do {
		printf("Enter a angle in degree (!=0) : ");
		scanf("%f", &angleInDegrees);
		
		radian=findRadianValue(angleInDegrees);
		printRadianValues();
		
		printf("\n\n");
		
	} while (angleInDegrees!=0);
	
	return 0;
}
