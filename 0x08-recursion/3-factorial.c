#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: the number to calculate factorial
 *
 * Return: integer value
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);
	
	return (result);
}
