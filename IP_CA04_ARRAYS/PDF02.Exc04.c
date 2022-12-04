#include <stdio.h>

int main()
{
    char correctAnswers[6]={'T', 'F', 'F', 'T', 'F', 'T'}, studentAnswers[6], temp;
    int i, count=0;

    for (i=0; i<6; i++)
    {
        printf ("Enter the Question %d answer : ", i+1);
        scanf(" %c", &studentAnswers[i]);
        
		/*if (!(temp=='T'||temp=='F'))
		{
			printf("\nInvalid Input");
			i--;
		}*/
	
        if (correctAnswers[i]==studentAnswers[i])
        {
            count++;
        }
    }
    
    for(i=0;i<6;i++)
	{
		printf("%c",studentAnswers[i]);
	
	}

    printf("\nNumber of correct answers : %d", count);

    return 0;
}