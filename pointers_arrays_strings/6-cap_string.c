#include "main.h"
/**
 * *cap_string - capitalize words
 * @s: string
 *
 * Return: string.
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) -= 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sep[j] == *(s + i - 1))
					{
						*(s + i) -= 32;
					}
				}
			}
		}
	i++;
	}
	return (s);
}
