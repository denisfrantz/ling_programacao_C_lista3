#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[5][5], i, j, SL[5], SC[5], x, soma;
	
	printf ("MATRIZ (5x5)\n============\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf ("%d", &matriz[i][j]);
			
	system ("cls");

	printf ("MATRIZ (5x5)\n============\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf ("%d ", matriz[i][j]);
		printf ("\n");
	}
	
	// inicialização dos vetores SL e SC
	x = 0;
	for (i = 0; i < 5; i++)
	{
		soma = 0;
		for (j = 0; j < 5; j++)
			soma = soma + matriz[i][j]; 
		SL[x] = soma; // atribuição da soma de todos elementos de uma linha no vetor "SL"
		x++;
	}
	x = 0;
	for (j = 0; j < 5; j++)
	{
		soma = 0;
		for (i = 0; i < 5; i++)
			soma = soma + matriz[i][j];
		SC[x] = soma; // atribuição da soma de todos elementos de uma coluna no vetor "SC"
		x++;
	}
	
	printf ("\nVETOR SL: ");
	for (x = 0; x < 5; x++)
		printf ("%d ", SL[x]);
		
	printf ("\nVETOR SC: ");
	for (x = 0; x < 5; x++)
		printf ("%d ", SC[x]);


	return 0;
}
