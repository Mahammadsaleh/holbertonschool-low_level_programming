#include <unistd.h>

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (result < 10)
			{
				putchar(result + '0');
			}
			else
			{
				putchar(result / 10 + '0');
				putchar(result % 10 + '0');
			}

			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

		putchar('\n');
	}
}

