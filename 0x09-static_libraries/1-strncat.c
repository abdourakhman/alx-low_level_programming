#include "main.h"

/**
*_strncat - appends the src string to the dest string, overwriting
* the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte.
* @src: first string
* @dest: second string
* @n: number of bytes from src
*
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
/*always true*/
	while (j != n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
