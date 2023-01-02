#include "main.h"

/**
 * print_chessboard - Prins a chessboard.
 * @a: The chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int index1, index2;

	for (index1 = 0; a[index1][7]; index1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
			_putchar(a[index1][index2]);
		_putchar('\n');
	}
}
