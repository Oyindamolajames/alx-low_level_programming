#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead
 *          any other char should be ignored
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i = 0;
	char current_char;

	va_start(args, format);

	while (format && format[i])
	{
		current_char = format[i];

		switch (current_char)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;

			default:
				i++;
				continue;
		}

		if (format[i + 1])
		{
			if (format && (format[i + 1] == 'c' || format[i + 1] == 'i' ||
				format[i + 1] == 'f' || format[i + 1] == 's'))
			{
				printf(", ");
			}
		}

		i++;
	}

	printf("\n");
	va_end(args);
}
