#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int count = 0;

	while (*dest++)
		;
	dest--;
	while (*src && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (p);
}
