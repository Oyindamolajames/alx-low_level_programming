#include <stddef.h>

/**
 * array_iterator - A function that executes a function given
 *  as a paraeter on each element of an array
 * @array: A pointer to an array
 * @size: size_t type for numbers of elements in the array
 * @action: a pointer to the function to be applied
 * on the elements in the array
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
