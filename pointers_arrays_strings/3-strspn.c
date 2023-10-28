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
	unsigned int max = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				if (j > max)
				{
				index = j;
				max = j;
				break;
				}
				break;
			}
		}
	}

	return  (index);
}

