#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * _atoi - str to int
 * @s: char
 *
 * Return: int number
 */

int _atoi(char *s)
{
	int i = 0;
	char last = *s;
	int result = 0;
	int counter = 0;
	bool flag = false;

	while (last != '\0')
	{
		last = *(s + i);
		if (last == '-')
		{
			counter++;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			flag = true;
			result = (result * 10) + (s[i] - '0');
			i++;
		}
		if (flag == true)
		{
			break;
		}
		i++;
	}
	if (counter % 2 == 1)
	{
		return (result * -1);
	}
	return (result);
}

