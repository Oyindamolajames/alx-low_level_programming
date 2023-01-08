#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program followed by new line
 * @argc: number of arguments
 * @argv: an array containing the argument
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])	
{
	printf("%s\n", *argv);
	return (0);
}
