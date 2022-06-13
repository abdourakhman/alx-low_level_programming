#include "main.h"

/**
 *puts_half  - prints half of a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (i >= 0)
	{
		if (str[length] == '\0')
			break;
		length++;
	}

	if (length  % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = length  / 2 + 1; i < length; i++)
			_putchar(str[i]);
	}
}
