#include <stdio.h>
/**
 * main - print 
 *
 *
 * Return: 0
*/
int main(void)
{
	for(int n = 0; n < 10; ++n)
	{
		putchar((n % 10) + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
