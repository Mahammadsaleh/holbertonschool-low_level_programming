#include <stdio.h>
/**
 * main - main
 * @argc: arguments count
 * @argv: pointer
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
