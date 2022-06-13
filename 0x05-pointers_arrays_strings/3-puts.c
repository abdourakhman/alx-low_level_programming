#include "main.h"

/**
* _puts -  prints a string, followed by a new line, to stdout.
* @str: the string
*
*Return: no return
*/
void _puts(char *str)
{
	int length = 0;
	char *i = str;

	length = _strlen(str);
	for (; i < str + length; i++)
		_putchar(*i);
	_putchar('\n');
}
