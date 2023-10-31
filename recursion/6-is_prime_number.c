/**
 * checker - checker
 * @n: number
 * @m: devider
 *
 * Return: int
 */

int checker(int n, int m)
{
	if (m == 1)
	{
		return (1);
	}
	else
	{
		if (n % m == 0)
		{
			return (0);
		}
		else
		{
			return (checker(n, m - 1));
		}
	}
}

/**
 * is_prime_number- is Prime
 * @n: number
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int check;

	if (n <= 1)
	{
		return (0);
	}

	check = checker(n, n / 2);

	return (check);
}
