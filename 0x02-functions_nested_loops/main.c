#include "main.h"

/**
 * main - entry point
 * Description: personal tester code for functions
 * Return: always 0 (success)
 */
int main(void)
{
	int r;

	r = print_sign(0);
	if (r < 0)
		r *= -1;
	_putchar(r + '0');
	_putchar('\n');
	return (0);

	return (0);
}
