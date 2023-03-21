#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	printf("%d\n", n);
	last_digit = (n % 10);

	_putchar(last_digit + '0');
	return (last_digit);
}
