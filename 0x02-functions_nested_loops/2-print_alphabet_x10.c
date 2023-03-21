#include <stdio.h>

/**
 * main -entry point
 *
 * Return: always 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
	}
}
