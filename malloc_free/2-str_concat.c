#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *str_concat -  concatenates two strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	char *conc;
	int i;
	int j;
	
	size = strlen(s1) + strlen(s2);
	conc = (char*)malloc((int)size * sizeof(char));

	if (conc == NULL)
	{
		return (NULL);
	}

	for ( i = 0 ;i < (int)strlen(s1) ;i++)
	{
		conc[i] = s1[i];
	}

	for ( j = 0 ;j < (int)size + 1 ; j++)
	{
		conc[i] = s2[j];
		i++;
	}

	return (conc);
}
