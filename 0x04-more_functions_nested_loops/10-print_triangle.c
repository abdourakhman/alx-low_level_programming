#include "main.h"

/**
* print_triangle - draws a triangle using # in the terminal.
* @size: the size of the square
* Return: no return
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
				_putchar(32);
			for (j = 0; j <= i; j++) 
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
