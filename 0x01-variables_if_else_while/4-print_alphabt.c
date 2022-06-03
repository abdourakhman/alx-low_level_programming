# include <stdio.h>


/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char letter = 'a';
	char end = 'z';

	for (; letter <= end; letter++)
	{
		if ((letter == 'q') || (letter == 'e'))
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
