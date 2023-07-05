#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input is prime number
 *
 * @n: input integer
 * @other: input other integer
 *
 * Return: 1 if n is prime or 0
*/

int prime(int n, int other);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - function check numbers < n can be divided
 *
 * @n: input int
 * @other: input other int
 *
 * Return: int
*/

int prime(int n, int other)
{
	if (other >= n && n > 1)
		return (1);
	else if (n % other == 0 || n <= 1)
		return (0);
	else
		return (prime(n, other + 1));
}
