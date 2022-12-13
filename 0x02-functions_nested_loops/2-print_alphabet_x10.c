#include "main.h"

/**
 * print_alphabet_x10 -prints alphabets in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int num;
	char lc;

	for (num = 0; num <= 9; num++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);
		_putchar('\n');
	}
}
