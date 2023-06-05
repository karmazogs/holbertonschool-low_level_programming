#include <stdio.h>

/**
 * main - prints every char in the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char x;

	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	printf("\n");
	return (0);
}
