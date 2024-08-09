#include <stdio.h>
#include <stdlib.h>
#define lin 15
#define col 15
int main()
{
	int matriz[lin][col], i, j;
	
	printf ("MATRIZ (15X15)\n==============\n");
	for (i = 0; i < lin; i++)
		for (j = 0; j < col; j++)
			scanf ("%d", &matriz[i][j]);
	
	system ("cls");
	for (i = 0; i < lin; i++)
	{
		for (j = 0; j < col; j++)
			printf ("%d ", matriz[i][j]);
		printf ("\n");	
	}
	
	return 0;
}
