#include <stdio.h>
#include "main.h"
/**
 * natural - prints the sum of all multiples of 3 or 5 below 1024
 * Returns:nothing
 */
int natural(void)
{
	int x = 0, sum;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			printf("%d, ", x);
			sum = sum + x;
		}
		x++;
	}
	printf("\n the sum of all these numbers is %d\n", sum);
	return (sum);
}
