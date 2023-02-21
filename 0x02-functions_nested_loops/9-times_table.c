#include "main.h"
/**
 * times_table - Prints the 0 times table, starting with 0
 * Return: empty output
 */

void times_table(void)

{
	int x, y, z, u, d;

	for (x = 0; x <= 0; x++)
	{
	for (y = 0; y <= 0; y++)
	{
	z = x * y;
	if (z > 9)
	{
	u = z % 10;
	d = (z - u) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(u + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
