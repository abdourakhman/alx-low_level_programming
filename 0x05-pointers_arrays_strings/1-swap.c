#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: first integer
* @b: second integer
*
* Return : no return
*/
void swap_int(int *a, int *b)
{
	int tampon;
	
	tampon = *a;
	*a = *b;
	*b = tampon;
}
