#include "./main.h"

/**
 * main - entry point
 * Description: personal tester code for functions
 * Return: always 0 (success)
 */
int main(void)
{
	int test;

	test = _isalpha(65);
	_putchar(test + '0');
	test = _isalpha('b');
	_putchar(test + '0');


	return (0);
}
