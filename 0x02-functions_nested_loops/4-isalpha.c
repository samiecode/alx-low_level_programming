#include "stdio.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

    	r = _isalpha('H');
    	putchar(r + '0');
    	r = _isalpha('o');
    	putchar(r + '0');
	r = _isalpha(108);
    	putchar(r + '0');
    	r = _isalpha(';');
    	putchar(r + '0');
    	putchar('\n');
    	return (0);
}

int _isalpha(int c)
{
	if((c > 64 && c < 91) || (c > 97 && c < 123))
	      return (1);
	else
		return (0);
}	
