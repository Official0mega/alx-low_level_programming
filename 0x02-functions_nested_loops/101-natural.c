#include <stdio.h>

/**
 * main - Prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */

int main(void)

{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
