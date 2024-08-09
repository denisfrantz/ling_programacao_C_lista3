#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matrizA[2][3], matrizB[3][2], i, j, matrizR[2][2], x, y;
	
	printf ("MATRIZ A (2X3)\n==============\n");
	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			scanf ("%d", &matrizA[i][j]);
			
	printf ("\nMATRIZ B (3X2)\n==============\n");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			scanf ("%d", &matrizB[i][j]);
			
	system ("cls");
	
	printf ("MATRIZ A (2X3)\n==============\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf ("%d ", matrizA[i][j]);
		printf ("\n");
	}
	printf ("\nMATRIZ B (3X2)\n==============\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
			printf ("%d ", matrizB[i][j]);
		printf ("\n")	;
	}
	
	return 0;
}
