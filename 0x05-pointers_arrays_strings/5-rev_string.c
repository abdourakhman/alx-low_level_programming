/**
* rev_string - reverses a string
* @s: the string
*
*Return: no return
*/
void rev_string(char *s)
{
	int i, j;
	char clone[1000000000];

	i = 0;
	while (*(s + i) !=  '\0')
	{
		clone[i] = *(s + i);
		i++;
	}
	j = 0;
	for (; i > 0; i--)
	{
		*(s + j) = clone[i - 1];
		j++;
	}
}
