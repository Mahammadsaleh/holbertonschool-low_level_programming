#include "main.h"
/**
 * print_chessboard -print chessborad
 *
 * @a: string
 *
 * Return:2d arr
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		if (i != 7)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
