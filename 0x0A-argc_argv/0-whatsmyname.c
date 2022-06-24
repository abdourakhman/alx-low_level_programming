#include "main.h"
#include <stdio.h>

/**
* main - entry point
* program that prints the number of arguments passed into it
* @argc:  the number of arguments or  size of argv[]
* @argv: a array that containts arguments passed
* Return: 0 always success
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
