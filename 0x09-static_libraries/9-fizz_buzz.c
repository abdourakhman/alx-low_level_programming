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
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			printf(" FizzBuzz");
		else if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", n);
	}
	printf("\n");
	return (0);
}
