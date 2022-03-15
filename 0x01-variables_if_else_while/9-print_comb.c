#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Description: print single digit in numbers with commas
 *
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
