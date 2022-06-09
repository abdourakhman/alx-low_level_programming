#include "main.h"

/**
* print_numbers - display numbers from 0 to 9
* Return: no return (void)
*/
void print_numbers(void)
{
	int cpt;

	for (cpt = 48; cpt < 58; cpt++)
		_putchar(cpt);
	_putchar('\n');
}
