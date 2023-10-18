#include "main.h"

/**
 * print_time - prints the time in HH:MM format
 * @hour: the hour
 * @minute: the minute
 *
 * Return: void
 */
void print_time(int hour, int minute)
{
	_putchar((hour / 10) + '0');
	_putchar((hour % 10) + '0');
	_putchar(':');
	_putchar((minute / 10) + '0');
	_putchar((minute % 10) + '0');
	_putchar('\n');
}

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			print_time(hour, minute);
		}
	}
}
