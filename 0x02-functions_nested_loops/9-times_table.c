#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n, i, multi;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			multi = n * i;
			if (multi <= 9)
				if (i != 9)
					printf("%d,  ", multi);
				else
					printf("%d", multi);
			else if (multi > 9)
			{
				if (i != 9)
					printf("%d, ", multi);
				else
					printf("%d", multi);
			}
		}
		putchar('\n');
	}
}
