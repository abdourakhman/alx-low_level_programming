#include <unistd.h>
#include "main.h"

/**
* _putchar - write the charcater c to stdout
* Return: 1 SUCCESS
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
