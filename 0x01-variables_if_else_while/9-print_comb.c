#include <stdio.h>
/**
 * main -entry point
 *
 * Description: program printing all combinations of single digit numbers
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);

}
