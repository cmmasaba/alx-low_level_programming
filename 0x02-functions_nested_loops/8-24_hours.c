#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starts from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int u, x, y, z;

	for (u = 48; u <= 50; u++)
	{
		for (x = 48; x <= 57; x++)
		{
			for (y = 48; y <= 53; y++)
			{
				for (z = 48; z <= 57; z++)
				{
					if (u >= 50 && x >= 52)
						break;
					_putchar(u);
					_putchar(x);
					_putchar(58);
					_putchar(y);
					_putchar(z);
					_putchar('\n');
				}
			}
		}
	}
}
