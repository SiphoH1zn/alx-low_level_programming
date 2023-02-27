#include "main.h"
/**
 * _strlen - return length of a string
 * @a: string
 * Return: length
 */
int _strlen(char *a)
{
	int long1 = 0;

	while (*a != '\0')
	{
		long1++;
		a++;
	}
	return (long1);
}
