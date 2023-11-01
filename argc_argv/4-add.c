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
		int i;

		for (i = 1; i < argc; i++)
		{
		if (*argv[i] < 58 && *argv[i] > 47)
		{
			result += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		}
		printf("%d\n", result);

		return (0);
}
