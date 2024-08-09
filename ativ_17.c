#include <stdio.h>
#include <stdlib.h>
int main()
{
	char vetor[50];
	int i;
	
	printf ("STRING (50 char.)\n=================\n");
	gets (vetor);
	
	printf ("\nCONVERSAO DA STRING:\n");
	for (i = 0; vetor[i] != '\0'; i++)
	{
		if ((vetor[i]=='a')||(vetor[i]=='e')||(vetor[i]=='i')||(vetor[i]=='o')||(vetor[i]=='u')) 
		{
			printf ("%c", vetor[i]);
		}
		else
		{
			if ((vetor[i]=='A')||(vetor[i]=='E')||(vetor[i]=='I')||(vetor[i]=='O')||(vetor[i]=='U'))
			{
				printf ("%c", vetor[i] + 32);
			}
			else 
			{
				if (vetor[i] + 90)
				{
					printf ("%c", vetor[i] - 32);
				}
				else
				{
					printf ("%c", vetor[i]);
				}
			}
		}
			
	}
	
	
	return 0;
}

