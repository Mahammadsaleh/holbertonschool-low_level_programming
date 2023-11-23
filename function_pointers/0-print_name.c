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
	if (name == NULL)
	{
		return;
	}
	f(name);
}
