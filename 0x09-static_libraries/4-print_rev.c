#include "main.h"

/**
* print_rev -  prints a string, in reverse, followed by a new line.
* @s: the string
*
*Return: no return
*/
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	for (; i > 0; i--)
		_putchar(*(s + (i - 1)));
	_putchar('\n');
}