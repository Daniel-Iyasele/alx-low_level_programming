#include "main.h"
/**
 * jack_bauer - function that prints time from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, b, c, d, counter, i;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	counter = 0;
	i = 0;

	do {
		while (i <= 1439)
		{
			if (counter > 59)
			{
				d = '0';
				c = '0';
				b = b + 1;
				counter = 0;
			}
			if (d > '9')
			{
				d = '0';
				c = c + 1;
			}
			if (b > '9')
			{
				b = '0';
				a = a + 1;
			}
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d++);
			_putchar('\n');
			counter++;
			i++;
		}
	} while (a != '2' && b != '3' && c != '5' && d != '9');
}
