#include <stdlib.h>

/**
* isupper - check if the character is in uppercase
* @c integer that stand for the ASCII code of the character
* Return: 1 if true and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <=90)
		return (1);
	if (c >=97 && c <= 122)
		return (0);

}
 
