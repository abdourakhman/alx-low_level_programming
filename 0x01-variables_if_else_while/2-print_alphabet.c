# include <stdio.h>


/**
* main - Entry point
* show alphabet
* Return: Always 0 (SUCCESS)
*/

int main(void)
{
	char letter;

	for (letter ='a'; letter <= 'z'; letter++)
	{
		putchar(letter);
		putchar('\n');
	}
}
