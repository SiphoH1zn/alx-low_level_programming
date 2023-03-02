#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
		return (dest);
	}
}
