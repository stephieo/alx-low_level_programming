#include "main.h"
/**
 * main - entry point
 * Description: personal tester code for functions
 * Return: always 0 (success)
 */
int main(void)
{
	int r;

	r = _isalpha('0');
	_putchar(r + 48);
	r = _isalpha('D');
	_putchar(r + 48);
	r = _isalpha('n');
	_putchar(r + 48);
	r = _isalpha(108);
	_putchar(r + 48);

	return (0);
}
