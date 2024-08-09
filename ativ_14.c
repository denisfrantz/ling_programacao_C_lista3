#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[30], i;
	
	printf ("VETOR (30 posicoes)\n===================\n");
	
	for (i = 0; i < 30; i++)
		scanf ("%d", &vetor[i]);
		
	system ("cls");
	
	printf ("VETOR (30 posicoes)\n===================\n");
	
	for (i = 29; i >= 0; i--) // impressão do vetor na ordem inversa
		printf ("%d ", vetor[i]);
		
	return 0;
}
