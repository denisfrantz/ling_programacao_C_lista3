#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[3][3], i, j, aux;
	
	printf ("MATRIZ (3x3)\n============\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf ("%d", &matriz[i][j]);
			
	system ("cls");
	
	printf ("MATRIZ (3x3)\n============\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf ("%d ", matriz[i][j]);
		printf ("\n");
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j) // verifica se os elementos da diagonal principal são iguais a 1
			{
				if (matriz[i][j] == 1)
					aux++;
			}
			else // verifica se os demais elementos são iguais a 0
				if (matriz[i][j] == 0)
					aux++;
		}
	}
	
	if (aux == 9)
		printf ("\n\nA matriz e permutacao");
	else
		printf ("\n\nA matriz nao e permutacao");
	
	return 0;
}
