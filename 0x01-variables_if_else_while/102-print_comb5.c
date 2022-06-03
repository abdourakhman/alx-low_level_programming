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
	int y;

	for (c = 0; c <= 9; c++)
	{
		for (k = 0 ; k <= 9 ; k++)
		{
			for (x = 0; x <= 9; x++)
			{
				for (y = 0; y <= 9; y++)
				{
					if ((c == x) && (k == y))
						continue;
					if ((c ==9) && (k==9))
						break;
					putchar('0' + c);
					putchar(k + '0');
					putchar(' ');
					putchar('0' + x);
					putchar(y + '0');
					if ((k == 8) && (y == 9))
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
