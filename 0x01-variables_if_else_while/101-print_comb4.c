#include <stdio.h>
/**
* main - Entry point
* combination of tree digit The three digits must be different
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
	int c;
	int k;
	int x;

	for (c = 0; c <= 9; c++)
	{
		for (k = c + 1; k <= 9 ; k++)
			for (x = k + 1; x <= 9; x++)
			{
				putchar('0' + c);
				putchar(k + '0');
				putchar(x + '0');
				if (k == 8)
					break;
				putchar(',');
				putchar(' ');
			}
			if (c == 7)
				break;
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
