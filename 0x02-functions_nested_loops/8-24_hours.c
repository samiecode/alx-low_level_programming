#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - every minute
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;
	int stop = 2359;
	char st[20];
	sprintf(st, "%d", stop);

	for (a = 0; a <= 2; a++)
	{
		for (b = a; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d < 10; d++)
				{
					char str[20];

					sprintf(str, "%d""%d""%d""%d", a, b, c, d);
					if (str == st)
						break;
					else
						printf("%d%d:%d%d\n", a, b, c, d);
				}
			}
		}
	}
}
