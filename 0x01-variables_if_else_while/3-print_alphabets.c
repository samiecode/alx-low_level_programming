#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase = 97;
	int uppercase = 65;
	while (lowercase < 123)
		putchar(lowercase++);
	while (uppercase < 91)
		putchar(uppercase++);
	putchar('\n');
	return (0);
}
