#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
* @s: the string
*
*Return: no return
*/
void rev_string(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	for (; i > 0; i--)
		printf("%c",*(s + (i - 1)));
}
