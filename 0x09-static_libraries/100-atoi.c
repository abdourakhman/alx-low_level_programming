
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int cpt = 0, len = 0, x = 0, y = 1, m = 1, i;

	while (*(s + cpt) != '\0')
	{
		if (len > 0 && (*(s + cpt) < '0' || *(s + cpt) > '9'))
			break;

		if (*(s + cpt) == '-')
			y *= -1;

		if ((*(s + cpt) >= '0') && (*(s + cpt) <= '9'))
		{
			if (len > 0)
				m *= 10;
			len++;
		}
		cpt++;
	}

	for (i = cpt - len; i < cpt; i++)
	{
		x = x + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (x * y);
}
