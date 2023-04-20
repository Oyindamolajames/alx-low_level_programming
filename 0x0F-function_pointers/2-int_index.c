#include <stddef.h>

/**
 * int_index - Searches for an integer index
 * @array: array to search
 * @size: nuber of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element for which cmp dosent
 * return 0, -1 if no element matches or size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
