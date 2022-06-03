#include <stdio.h>
/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar('0' + c);
		if (c == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
