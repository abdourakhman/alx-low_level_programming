#include <unistd.h>
#include "main.h"

/**
* jack_bauer - prints every minute of the day of Jack Bauer,
* starting from00:00 to 23:59.
*
* Return: no return (void)
*/
void jack_bauer(void)
{
	int min = 0;
	int h = 0;
	int i = 0;
	int first_digit_mn = 48;
	int first_digit_h = 48;

	for (h = 0; h <= 23; h++)
	{
		if (h - 1  % 10 == 9)
		{
			first_digit_h++;
			h = 0;
		}
		if (first_digit_h == 50 && h == 4)
			break;
		for (; min < 60; min++)
		{
			_putchar(first_digit_h);
			_putchar(h + '0');
			_putchar(58);
			_putchar(first_digit_mn);
			_putchar(min + '0');
			_putchar('\n');
			sleep(60);
			if (min % 10 == 9)
			{
				first_digit_mn++;
				min = -1;
				if (first_digit_mn - 1 == 53)
				{
					min = 0;
					first_digit_mn = 48;
					if (first_digit_h == 50)
						break;
					break;
				}
			}
		}
	}
}
