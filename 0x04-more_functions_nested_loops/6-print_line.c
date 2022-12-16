#include "main.h"

/**
 * print_line - prints stright line n times.
 * @n: the number of stright lines that should be printed
 * Return: no return.
 */

void print_line(int n)
{
	int i;

	for (i = 0, i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
