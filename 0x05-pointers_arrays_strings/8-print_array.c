#include <stdio.h>

/**
 * print_array- prints n elements
 * of an array of int, followed by a new line.
 * @a: the array.
 * @n: is the number of elements of the array to be printed
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
		i++;
	}
}
