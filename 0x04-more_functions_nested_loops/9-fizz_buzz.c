#include <stdio.h>

/**
* main - entry point
* prints the numbers from 1 to 100
* for multiples of three print Fizz
* for the multiples of five print Buzz
* and for both fizzbuzz
* Return: 0 always SUCCESS
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("fizzbuzz ");
		else if (i % 3 == 0)
			printf("fizz ");
		else if (i % 5 == 0)
			printf("buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
