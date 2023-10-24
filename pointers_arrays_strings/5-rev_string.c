#include "main.h"
/**
 * rev_string - Entry point
 *
 *@s: string
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i = 0;
	int first;
	int n;
	int temp;

	while (s[i] != '\0')
	{
		i++;
	}

	n = i - 1;
	first = 0;
	while (n > first)
	{
		temp = s[n];
		s[n] = s[first];
		s[first] = temp;
		first++;
		n--;
	}

}
