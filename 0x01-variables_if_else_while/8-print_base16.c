#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Description: print the letters of thr alphabet except e, q
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);

	return (0);
}
