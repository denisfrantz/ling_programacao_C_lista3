#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vetor[10], i, neg, pos;
	
	neg = 0;
	pos = 0;
	
	printf ("VETOR (10 valores)\n==================\n");
	
	for (i = 0; i < 10; i++)
	{
		scanf ("%d", &vetor[i]); // leitura do vetor
		if (vetor[i] < 0) // se o valor for negativo, ele é armazenado na variável "neg"
			neg++;
			
		else
			if (vetor[i] > 0)// se o valor for positivo, ele é armazenado na variável "pos"
				pos++;
	}
	system ("cls");
	
	printf ("VETOR (10 valores)\n==================\n");
	for (i = 0; i < 10; i++)
		printf ("%d ", vetor[i]);
	
	printf ("\n\nQuantidade de valores negativos: %d", neg);
	printf ("\nQuantidade de valores positivos: %d", pos);
	
	return 0;
}
