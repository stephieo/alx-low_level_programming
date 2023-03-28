#include <stdio.h>
/**
 * main - entry point
 *
 * Description: program printing the hexadecimal digits in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char i;
	char n;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}

	for (n = 'a' ; n < 'g' ; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
