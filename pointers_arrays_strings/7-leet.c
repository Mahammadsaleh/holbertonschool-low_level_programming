#include "main.h"
/**
 * *leet - encription algorithm
 * @s: string
 *
 * Return: string.
 */
char *leet(char *s)
{
	int i, j;
	char input[] = "aAeEoOtTlL";
	char output[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
			}
		}
	}
	return (s);
}
