#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
        putchar(r + '0');
	r = _islower(108);
        putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 * _islower - checks for lowercase character
 *
 * Return: int
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
