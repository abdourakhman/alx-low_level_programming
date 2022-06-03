#include <stdio.h>
/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int c;

	for (c = 0; c <= 25; c++)
		putchar('z' - c);
	putchar('\n');
	return (0);

}
