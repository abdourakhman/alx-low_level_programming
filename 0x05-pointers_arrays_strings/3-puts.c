#include "main.h"

/**
* _puts -  prints a string, followed by a new line, to stdout.
* @str: the string
*
*Return: no return
*/
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
