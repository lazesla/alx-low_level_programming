#include "main.h"
/**
 * print_number - print an integer
 * @n: integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n < -9)
			print_number(n / -10);
		_putchar('0' - n % 10);
	}
	else
	{
		if (n > 9)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
