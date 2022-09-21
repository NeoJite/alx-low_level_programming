#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int t = 0, f, right;

	while (s[t])
		t++;

	f = t / 2;
	right = 0;

	while (right != f)
	{
		char temp = s[right];
		int left = t - right - 1;

		s[right] = s[left];
		s[right] = temp;

		right++;
	}
}
