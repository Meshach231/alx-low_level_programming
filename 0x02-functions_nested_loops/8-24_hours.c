#include "main.h"
/**
 * jack_bauer - prints every minutes of the day
 * Description: print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hour_ten, hour_one, minute_ten, minute_one, hour_max;

	hour_max = 58;
	hour_ten = '0';
	while (hour_ten < '3')
	{
		if (hour_ten == '2')
		{
			hour_max = '4';
		}
		hour_one = '0';
		while
			(hour_one < hour_max)
			{
				minute_ten = '0';
				while (minute_ten < '6')
				{
					minute_one = '0';
					while (minute_one < 58)
					{
						_putchar(hour_ten);
						_putchar(hour_one);
						_putchar(':');
						_putchar(minute_ten);
						_putchar(minute_one);
						_putchar('\n');
						minute_one++;
					}
					minute_one = '0';
					minute_ten++;
				}
				minute_ten = '0';
				hour_one++;
			}
		hour_one = '0';
		hour_ten++
	}
}
