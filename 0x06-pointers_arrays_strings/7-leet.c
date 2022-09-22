#include "main.h"
/**
 * leet - |encode| into 1337speak
 * @n: input value
 * Return: the resulting string
 */

char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; 1++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{/
				s[i] = b[j];
			}
		}
	}
	return (s);
}
