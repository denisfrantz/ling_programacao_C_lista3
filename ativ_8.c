#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[5][5], i, j, vetor[5], x, somaDPrin;
	
	somaDPrin = 0;
	
	printf ("MATRIZ (5x5)\n============\n");
	
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			scanf ("%d", &matriz[i][j]);
			if (i == j) // quando o número da linha é igual ao número da coluna, o valor lido é armazenado
						// na varíavel "somaDPrin" e também no vetor correspondente
			{
				somaDPrin = somaDPrin + matriz[i][j];
				vetor[x] = matriz[i][j];
				x++;
			}
		}
	system ("cls");
		
	printf ("MATRIZ (5x5)\n============\n");
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf ("%d ", matriz[i][j]);
		printf ("\n");
	}
	
	printf ("\nSoma dos elementos da diagonal principal: %d", somaDPrin);
	printf ("\nElementos da diagonal principal: ");
	for (x = 0; x < 5; x++)
		printf ("%d ", vetor[x]);	
	
	return 0;
}
