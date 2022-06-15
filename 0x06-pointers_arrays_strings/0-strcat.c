#include "main.h"

/**
*_strcat - appends the src string to the dest string, overwriting
* the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte.
* @src: first string
* @dest: second string
*
* Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char concat[1000];
	int i = 0;
	int j = 0;
	while (*(dest + i) != '\0')
	{
		concat[i] = *(dest + i);
		i++;
	}
	while (*(src + j) != '\0')
	{
		concat[i] = *(src + j);
		i++;
		j++;
	}
	_putchar('\0');
}
