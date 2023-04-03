#include "main.h"
/**
 * more_numbers - prints number 0 to 14 , 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int n,i;
	
	for (n = 0; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}

			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}	
