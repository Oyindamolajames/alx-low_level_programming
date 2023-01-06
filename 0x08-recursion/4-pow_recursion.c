#include "main.h"

/**
 * _pow_recursion - A function that return value of x raise
 * to power of y
 * @x: The x argument
 * @y: the y argument
 *
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
