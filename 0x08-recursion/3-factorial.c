#include "main.h"

/**
 * factorial - A function that prints the factorial of a number
 * @n: The ineger to find the factorial
 * Return: The factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
