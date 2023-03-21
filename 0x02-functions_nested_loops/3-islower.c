#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @parameter: int c
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
