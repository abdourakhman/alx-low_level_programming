#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string1
 * @s2: string2
 * Return: 1 if true -1 otherwhise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (i > 0)
	{
		if (s1[i] != s2[i])
			return (-1);
	}
	return (1);
}
