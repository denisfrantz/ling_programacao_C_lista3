#include <stdio.h>
#include <stdlib.h>
int main()
{
	char vetor[50], aux;
	int i;
	
	printf ("STRING (50 char.)\n=================\n");
	gets (vetor);
	
	printf ("\nINFORME UM CARACTERE: ");
	scanf ("%c", &aux);
	
	for (i = 0; vetor[i] != '\0'; i++)
		if (aux == vetor[i]) // se o caractere lido estiver presente na string, ele é substituído por "*"
			vetor[i] = '*';
	
	printf ("\nRESULTADO: ");
	for (i = 0; vetor[i] != '\0'; i++)
		printf ("%c", vetor[i]);
	
	return 0;
}
