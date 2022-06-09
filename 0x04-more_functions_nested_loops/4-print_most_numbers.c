#include "main.h"

/**
* print_most_numbers - display numbers from 0 to 9 except 2 and 4
* Return: no return (void)
*/
void print_most_numbers(void)
{
	int cpt;

	for (cpt = 48; cpt < 58; cpt++)
	{
		if (cpt == 50 || cpt == 52)
			continue;
		_putchar(cpt);
	}
	_putchar('\n');
}
