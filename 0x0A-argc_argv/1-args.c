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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
