#include "main.h"

/**
* more_numbers - prints number from 1 to 14 ten times
* Return: no return
*/
void more_numbers(void)
{
	int num;
	int times;
	int cpt;

	for (times = 0; times < 10; times++)
	{
		num = 0;
		for (cpt = 0 ; cpt < 15; cpt++)
		{
			if (cpt > 9)
			{
				if (cpt == 10)
					num = 0;
				_putchar(49);
			}
			_putchar(num + '0');
			num++;
		}
		_putchar('\n');
	}
}
