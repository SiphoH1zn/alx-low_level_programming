#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 * return: Always 0 (Success)
 **/

int main(void)
{
	char charactor;

	for (charactor = 'a', charector <= 'z', charactor++)
	{
		putchar(charactor);
	}
	putchar('\n');
	return (0);
}
