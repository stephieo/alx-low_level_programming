#include "main.h"
/**
 * more_numbers - prints number 0 to 14 , 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
