/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int code = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			;
		if (s1[i] > s2[i])
			code += (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			code -= (s2[i] - s1[i]);
		i++;
	}
	return (code);
}
