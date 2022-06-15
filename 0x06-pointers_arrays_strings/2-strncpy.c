#include "main.h"

/**
*_strncpy - copies the src string to the dest string
* @dest: first string
* @src: second string
* @n: number of bytes from src
*
* Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		/*if ((*src + i) == '\0')*/
		/*	break;*/
		i++;
	}
	return (dest);
}
