#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: number
 *
 * Return: last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = abs(num) % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
