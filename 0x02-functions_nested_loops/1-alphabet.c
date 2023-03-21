#include "main.h"

/**
 * print_alphabet - all lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
        char ch;

        for (ch = 'a'; ch <= 'z'; ch++)
                putchar(ch);
        putchar('\n');
}

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
