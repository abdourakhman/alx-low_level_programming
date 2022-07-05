#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int cpt = 0, i;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + cpt) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + cpt) == letters[i])
			{
				*(s + cpt) = rot13[i];
				break;
			}
		}
		cpt++;
	}

	return (s);
}
