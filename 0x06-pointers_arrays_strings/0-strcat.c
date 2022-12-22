#include "main.h"

/**
 * _strcat - concatenates two strings, a destination and source
 * @dest: the destination string
 * @src: the source string
 * Return: pointer to the destination
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
