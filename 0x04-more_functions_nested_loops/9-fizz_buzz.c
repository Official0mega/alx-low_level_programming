#include "main.h"
#include <stdio.h>

/**
 * main - Prints a Fizz Buzz program
 * Return: Always 0 (Success)
 */

int main(void)

{

	int x;

	for (x = 1; x <= 100; x++)
	{
	if ((x % 3 == 0) && (x % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (x % 3 == 0)
	{
	printf("Fizz");
	}
	else if (x % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", x);
	}
	if (x != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);

}
