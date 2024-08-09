#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz[4][5], i, j, maior, lin, col;
	
	printf ("MATRIZ (4x5)\n============\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 5; j++)
		{
			scanf ("%d", &matriz[i][j]); // leitura da matriz
			if ((i == 0)&&(j==0)) 
			{
				maior = matriz[i][j]; // o valor da primeira leitura é o maior valor da matriz
				lin = i + 1;
				col = j + 1;
			}
			else
				if (matriz[i][j] > maior) // nas demais leituras, o valor é comparado com a variável "maior"
				{
					maior = matriz[i][j];
					lin = i + 1;
					col = j + 1;
				}
		}
			
	system ("cls");
	
	printf ("MATRIZ (4x5)\n============\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
			printf ("%d ", matriz[i][j]);
		printf ("\n");
	}
	
	printf ("\nO maior valor da matriz e %d (posicao: linha %d / coluna %d)", maior, lin, col);
	
	return 0;
}

