void putchar(void)
{
	char *message = "_putchar";
	int i = 0;

	for (; i < strlen(message); i++)
		putchar(message[i]);
	putchar('\n');
}
