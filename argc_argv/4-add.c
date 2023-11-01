#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - main
 * @argc: arguments count
 * @argv: pointer
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j;

		for (j = 0; j < (int)strlen(arg); j++)
		{
			if (arg[j] < '0' || arg[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(arg);
	}

	printf("%d\n", result);

	return (0);
}
