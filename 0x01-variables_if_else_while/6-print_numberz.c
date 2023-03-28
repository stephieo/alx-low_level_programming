#include <stdio.h>
/**
 * main -entry point
 *
 * Description: printing all digits in base 10 using putchar function
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48 ; a < 58 ; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
