
/**
 * calculate_sqrt - do somthing
 * @n: number
 * @guess: guess
 *
 * Return: int
 */
int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (calculate_sqrt(n, guess + 1));
}
/**
 * _sqrt_recursion - do something
 * @n: number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (calculate_sqrt(n, 1));
}
