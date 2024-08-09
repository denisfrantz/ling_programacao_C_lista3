#include <stdio.h>
#include <stdlib.h>
#define lin 10
#define col 5
int main()
{
	int matriz[10][5], i, j, soma;
	
	printf ("MATRIZ (10x5)\n=============\n");
	
	for (i = 0; i < lin; i++)
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &matriz[i][j]); 
			soma = (soma + matriz[i][j]); // atribuição dos valores lidos na variável "soma"
		}
	system ("cls");
	
	printf ("MATRIZ (10x5)\n=============\n");
	
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf ("%d ", matriz[i][j]);
		}
		printf ("\n");
	}
		
	printf ("\nSoma dos elementos da matriz: %d", soma);
	
	return 0;
}
