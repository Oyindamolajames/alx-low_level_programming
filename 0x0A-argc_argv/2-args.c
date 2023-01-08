#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: number of argument
 * @argv: an rray containing the number of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
