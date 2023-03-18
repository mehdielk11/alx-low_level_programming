#include <stdio.h>
/* This program prints the numbers from 0 to 9 separated by commas and spaces.
   It uses a for loop to iterate through the numbers and putchar() function to print them.
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
