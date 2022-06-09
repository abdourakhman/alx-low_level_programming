/**
* _isdigit - check if the character is an digit (0-9)
* @c - the caharcter checked
* Return: 1 if true 0 otherwhise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
