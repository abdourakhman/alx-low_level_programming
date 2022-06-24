#include "main.h"
#include <stdio.h>

/**
* main - entry point
* program that prints the number of arguments passed into it
* @argc:  the number of arguments or  size of argv[]
* @argv: a array that containts arguments passed
* Return: 0 always success
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
