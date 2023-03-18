#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the numbers from 0-9
 *		following by comma and finally
 *		by a new line using just
 *		`putchar` and ASCII numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
