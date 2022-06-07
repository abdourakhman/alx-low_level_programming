#include "main.h"

/**
*  print_alphabet - display alphabet from a to z
*
* Return: Always 0 (SUCCESS)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
