#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[5][5], i, j, vetSomaLin[5], x, somaLin, maior, linha;
	
	printf ("MATRIZ (5x5)\n============\n");
	
	for (i = 0; i < 5; i++)
	{
		somaLin = 0;
		for (j = 0; j < 5; j++)
		{
			scanf ("%d", &matriz[i][j]);
			somaLin = somaLin + matriz[i][j]; // o valor lido é armazenado na variável "somaLin" 
		}
		vetSomaLin[x] = somaLin; // o vetor correspondente guarda a soma dos 5 elementos da linha recém lida
		x++;
	}			
	system ("cls");
	
	printf ("MATRIZ (5x5)\n============\n");
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf ("%d ", matriz[i][j]);
		printf ("\n");
	}
	
	for (x = 0; x < 5; x++)
	{
		if (x == 0) // a primeira linha possui a maior soma 
		{
			maior = vetSomaLin[x];
			linha = x;
		}
		else 
		{
			if (vetSomaLin[x] > maior) // a soma das demais linhas são comparadas com a variável "maior"
			{
				maior = vetSomaLin[x];
				linha = x;
			}
		}
	}
	
	printf ("\nLinha com a maior soma: %d", linha + 1);
	
	return 0;
}
