#include <stdio.h>

/**
 * main - prints every char in the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	printf("\n");
	return (0);
}
