#include <stdio.h>
#include <stdlib.h>
int main()
{
	int matriz1[5][5], matriz2[5][5], i, j;
	
	printf ("MATRIZ 1 (5X5)\n==============\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf ("%d", &matriz1[i][j]);
	
	printf ("\nMATRIZ 2 (5X5)\n==============\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			scanf ("%d", &matriz2[i][j]);
		
	system ("cls");	
	
	printf ("MATRIZ 1 (5X5)\n==============\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf ("%d ", matriz1[i][j]);
		printf ("\n");
	}
	printf ("\nMATRIZ 2 (5X5)\n==============\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf ("%d ", matriz2[i][j]);
		printf ("\n");
	}
	
	return 0;
}
