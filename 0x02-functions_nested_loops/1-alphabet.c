#include "main.h"

/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
