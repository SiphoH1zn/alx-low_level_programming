#include "main.h"
/**
 * _strncat - concatenate two strings
 * using n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
		destlen++;
	}
	for (x = 0; src[x] != '\0'; x++)
	{
		srclen++;
	}
	for (x = destlen, y = 0; y < n; x++, y++)
	{
		if (dest[y] != '\0' && src[y] != '\0')
		{
			dest[x] = src[y];
		}
	}
	dest[x] = '\0';
	return (dest);
}
