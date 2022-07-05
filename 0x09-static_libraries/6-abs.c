#include "main.h"

/**
* _abs - give the absolute value of an integer.
* @n: The intger checked
* Return: n positif always
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
	_putchar('\n');
}
