#include <stdio.h>
/**
 * main - prints the sizes
 *
 * Return: 0
 */

int main(void)
{
	char charType;
	int intType;
	long longType;
	long long longLongType;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longLongType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);

}
