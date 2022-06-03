# include <stdio.h>


/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char letter;
	char end = 'z';

	for (letter = 'a'; letter <= end; letter++)
	{
		putchar(letter);
		if (letter == end)
		{
			letter = 'A';
			end = 'Z';
		}
		if (letter =='Z')
			break;
	}
	putchar('$');
	putchar('\n');
	return (0);
}
