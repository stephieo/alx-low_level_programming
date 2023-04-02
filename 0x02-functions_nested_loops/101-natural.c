#include <stdio.h>
#include "main.h"
/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 * Returns: always 0 (success)
 */
int main(void)
{
	int x = 0, sum;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum = sum + x;
		}
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
