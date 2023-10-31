/**
 * is_prime_number- is Prime
 * @n: number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	static int i = 2; 

	if (n == 0 || n == 1)
	{
		return (0);
	} 

	if (n == i)
		return (1);

	if (n % i == 0)
	{
		return (0);
	}
 
	i++;

	return is_prime_number(n);
}
