#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str1[50], str2[50], str3[100], x;
	int i;
	
	printf ("STRING 1 (50 char.)\n===================\n");
	gets (str1);
	printf ("\nSTRING 2 (50 char.)\n===================\n");
	gets (str2);
	
	for (i = 0; str1[i] != '\0'; i++)
	{
		str3[x] = str1[i]; // atribuição da string 1 em uma terceira string
		x++;
	}
	for (i = 0; str2[i] != '\0'; i++)
	{
		str3[x] = str2[i]; // atribuição da string 2 em uma terceira string
		x++;
	}
	
	printf ("\nUNIAO DAS STRINGS:");
	for (str3[i] < '\0'; x >= 0; x--)
		printf ("%c", str3[x]);
	
	return 0;
}
