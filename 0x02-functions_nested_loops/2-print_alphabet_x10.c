#include "main.h"
/**
 * print_alphabet-x10 - function for header
 *
 * Descrioption:print  alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void) /*this will run 10 times*/
{
	int i;

	for (i = 0 ; i <= 10 ; i++)
	{
		char i;

		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);
		} 
		_putchar('\n');
	}
}
