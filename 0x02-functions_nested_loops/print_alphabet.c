#include "main.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
* Return: void
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

/**
 * main- Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

