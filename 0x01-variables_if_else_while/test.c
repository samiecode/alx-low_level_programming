#include <stdio.h>

int main(void)
{
	//int n = 323212;
	int n;
	for (n = 0; n <= 127; n++)
	{
		printf("%d ", n);
		putchar(n);
		putchar('\n');
	}
	putchar('\n');
	//printf("%d\n",  n%10);
	//putchar('A');
	return  (0);
}
	    
