#include <stdio.h>

/**
 * main - prints every char in the alphabet
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
