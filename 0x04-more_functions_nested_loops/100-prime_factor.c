#include <stdio.h>

/**
 * main - entry block
 * @void: no mush argument
 * Return: 0
 */
int main(void)
{
	long s, number = 612852475143;

	for (s  = 2; s <= number; s++)
	{
		if (number % s == 0)
		{
			number = number / s;
			s--;
		}
	}

	printf("%lu\n", s);
	return (0);
}
