#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
int maximum_hours = 58;
int hours_in_tens;
int hours_in_ones;
int minutes_in_tens;
int minutes_in_ones;

for (hours_in_tens = '0'; hours_in_tens < '3'; hours_in_tens++)
{
if (hours_in_tens == '2')
{
maximum_hours = '4';
}
for (hours_in_ones = '0'; hours_in_ones < maximum_hours; hours_in_ones++)
{
for (minutes_in_tens = '0'; minutes_in_tens < '6'; minutes_in_tens++)
{
for (minutes_in_ones = '0'; minutes_in_ones < 58; minutes_in_ones++)
{
_putchar(hours_in_tens);
_putchar(hours_in_ones);
_putchar(':');
_putchar(minutes_in_tens);
_putchar(minutes_in_ones);
_putchar('\n');
}
minutes_in_ones = '0';
}
minutes_in_tens = '0';
}
hours_in_ones = '0';
}
}
