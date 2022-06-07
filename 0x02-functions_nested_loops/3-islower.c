#include "main.h"

/**
*  is_lower - check if the character is miniscule
*
* Return: Always 1 if true
* 0 otherwise
*/
int is_lower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	putchar('\n');
}
