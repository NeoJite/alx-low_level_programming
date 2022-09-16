#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: Always 0
 */
int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if ((b % 3 == 0) && (b % 5 == 0))
			printf("FizzBuzz");
		else if (b % 3 == 0)
			printf("Fizz");
		else if (b % 5 == 0)
			printf("Buzz");
		else
			printf("%i", b);
		if (b < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
