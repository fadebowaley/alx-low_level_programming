#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Cont
