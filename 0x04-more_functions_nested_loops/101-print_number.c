#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int a;
  	unsigned int b;
  	int cpt;

	if (n < 0)
	{
		_putchar(45);
		a = n * -1;
	}
	else
		a = n;
	b = a;
	cpt = 1;
	while (b > 9)
	{
		b /= 10;
		cpt *= 10;
	}
	for (; cpt >= 1; cpt /= 10)
		_putchar(((a / cpt) % 10) + 48);
}
