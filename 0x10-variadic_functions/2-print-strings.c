#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function.
 * @...: Variable arguments passed to the function.
 *
 * Description: This function prints strings, followed by a new line. If
 *              separator is NULL, it doesn't print it. If one of the
 *              strings is NULL, it prints (nil) instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
