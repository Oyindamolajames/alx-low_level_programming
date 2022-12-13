#include "main.c"

/**
 * _abs - Computes the absolute value of an integer
 * @t: the integer value
 * Return: The absolute value
 */

int _abs(int t)
{
	if (t >= 0)
		return (t);
	else
		return (t * -1);
}
