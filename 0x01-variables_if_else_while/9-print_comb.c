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
<<<<<<< HEAD
			break;
=======
			continue;
>>>>>>> 8bddefb76109b9faea3179799de66c3d137bb506
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
