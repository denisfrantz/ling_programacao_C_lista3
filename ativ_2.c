#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor1[10], vetor2[10], i, vetor3[20], x;
	
	printf ("VETOR 1 (10 POSICOES)\n=====================\n");
	for (i = 0; i < 10; i++)
		scanf ("%d", &vetor1[i]);
		
	printf ("\nVETOR 2 (10 POSICOES)\n=====================\n");
	for (i = 0; i < 10; i++)
		scanf ("%d", &vetor2[i]);	
		
	system ("cls");
	
	printf ("VETOR 1 (10 POSICOES)\n=====================\n");
	for (i = 0; i < 10; i++)
		printf ("%d ", vetor1[i]);
		
	printf ("\n\nVETOR 2 (10 POSICOES)\n=====================\n");
	for (i = 0; i < 10; i++)
		printf ("%d ", vetor2[i]);	
	
	return 0;
}
