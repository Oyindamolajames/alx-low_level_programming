#include <stdio.h>

/**
 * main -print alphabets in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lowcase;

	for (lowcase = 'a; lowcase <= 'z'; lowcase++);
	{
		putchar(lowcase);
	}
	putchar('\n');
	return (0);
