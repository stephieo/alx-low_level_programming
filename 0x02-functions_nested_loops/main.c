#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: personal tester code for functions
 * Return: always 0 (success)
 */
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
        r = _abs(0);
	printf("%d\n", r);
        r = _abs(1);
	printf("%d\n", r);
        r = _abs(-98);
	printf("%d\n", r);
        return (0);
}
