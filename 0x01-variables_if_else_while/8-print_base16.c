#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;
	char n;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num = num + 1;
	}

	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
