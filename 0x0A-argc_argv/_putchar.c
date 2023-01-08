#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to the standard output
 * @c: The characterto print to standard output
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
