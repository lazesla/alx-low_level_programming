#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str = "main\n";

	while (*str != '\0')
		_putchar(*str++);
	return (0);
}
