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
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			end = 'Z';
		}
	}
	putchar('\n');
	return (0);
}
