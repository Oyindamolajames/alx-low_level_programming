#include "main.h"

/**
 * _strstr - Locates a subsring
 * @haystack: The string to be seearched
 * @needle: The substring to be located
 * Return: If the substring is located -
 * apointer to the beginning of the located substring
 * if te substring is not located -NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
