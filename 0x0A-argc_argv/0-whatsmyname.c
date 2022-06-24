#include "main.h"
#include <stdio.h>

/**
* main - entry point
* program that prints the name of program
* @argc:  the number of arguments or  size of argv[]
* @argv: a array that containts arguments passed
* Return: 0 always success
*/
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
