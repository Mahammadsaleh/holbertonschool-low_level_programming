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
		int result;
		(void)argc;

		if (argv[1] != NULL && argv[2] != NULL)
		{
			result = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", result);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		return (0);
}
