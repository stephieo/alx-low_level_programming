#include <stdio.h>
/**
 * main -entry point
 *
 * Description: printing the alphabet in reverse using putchar function
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
