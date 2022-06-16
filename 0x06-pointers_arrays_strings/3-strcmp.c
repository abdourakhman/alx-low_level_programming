#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string1
 * @s2: string2
 * Return: 0->matching 15->s1>s2 and -15->s2>s1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int sign;

	while ((s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] > s2[i])
		{
			sign = 1;
			break;
		}
		else
		{
			sign = -1;
			break;
		}
		i++;
	}
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((s1[i] != s2[i]) || (s2[i] != s1[i]))
			return (15  * sign);
		i++;
	}
	return (0);
}
