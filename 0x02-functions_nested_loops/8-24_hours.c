#include "main.h"
/**
 * jack_bauer - lists all the minutes of the day of Jack Bauer
 * Return:nothing
 */
void jack_bauer(void)
{
	int x, y;
	int a, b, c, d;

	x = 0;
	while (x <= 23)
	{
		a = ((x / 10) + 48);
		b = ((x % 10) + 48);

		y = 0;
		while (y <= 59)
		{
			c = ((y / 10) + 48);
			d = ((y % 10) + 48);

			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(c);
			_putchar(d);
			_putchar('\n');

			y++;
		}
		x++;
	}
}


