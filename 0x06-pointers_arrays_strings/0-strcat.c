char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest++)
		;
	dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
