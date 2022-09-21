#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: String to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j, right;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	str = s;
	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
