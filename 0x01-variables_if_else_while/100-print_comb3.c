#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int pre;
	int post;

	for (pre = 0; pre < 9; pre++)
	{
		for (post = (pre + 1); post < 10; post++)
		{
			putchar(pre + '0');
			putchar(post + '0');
			if (pre != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
