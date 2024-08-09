#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[5][5], i, j, vetor[5], x, rep;
	
	printf ("MATRIZ (5x5)\n============\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf ("%d", &matriz[i][j]);
			
	printf ("\nVETOR (5 POSICOES)\n==================\n");
	for (x = 0; x < 5; x++)
		scanf ("%d", &vetor[x]);
		
	system ("cls");
	
	printf ("MATRIZ (5x5)\n============\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf ("%d ", matriz[i][j]);
		printf ("\n");
	}
	
	printf ("\nVETOR (5 POSICOES)\n==================\n");
	for (x = 0; x < 5; x++)
		printf ("%d ", vetor[x]);
	printf ("\n");
		
	for (x = 0; x < 5; x++)
		for (i = 0; i < 5; i++)
			for (j = 0; j < 5; j++)
				if (vetor[x] == matriz[i][j]) // percorre o vetor e a matriz para verificar se existe um valor comum aos dois
				{
					rep = matriz[i][j]; 
					printf ("\nO valor %d esta presente na matriz e no vetor", rep);
				}
	
	return 0;
}
