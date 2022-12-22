#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @c: char argument to be displayed on the stdout
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
