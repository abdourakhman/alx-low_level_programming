#include "main.h"

/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int message[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;
	int size;

	size = sizeof(message) / sizeof(int);
	for (i = 0; i < size; i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');
	return (0);
}
