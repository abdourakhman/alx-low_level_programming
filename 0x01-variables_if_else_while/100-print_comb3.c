#include <stdio.h>
/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int c;
	int k;

	for (c = 0; c <= 9; c++)
	{
		for (k = c + 1; k <= 9 ; k++)
		{
			putchar('0' + c);
			putchar(k + '0');
			if (c == 8)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
