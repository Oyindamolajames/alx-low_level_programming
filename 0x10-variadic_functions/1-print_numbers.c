#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @separator: A pointer to character to seperate numbers
 * @n: the number of numbers to seperate
 *
 * Return: Always void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
