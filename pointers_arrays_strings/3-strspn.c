#include <stdio.h>
#include <stdio.h>

/**
 *  _strspn - gets the length of a prefix substring
 *  @s: string
 *  @accept: char
 *
 * Return: int value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index = 0;
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				index++;
				break;
			}
		}

		if (accept[j] == '\0')
		{
			break;
		}
	}

	return  (index);
}

