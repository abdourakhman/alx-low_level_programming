#include <stdio.h>
/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c+'0');
	putchar('\n');
	return (0);

}
