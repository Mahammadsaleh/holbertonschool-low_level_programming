#include <stdio.h>
/**
 * print_name - print name
 * @name: str
 * @f: function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}

	if (name == NULL)
	{
		return;
	}

	f(name);
}
