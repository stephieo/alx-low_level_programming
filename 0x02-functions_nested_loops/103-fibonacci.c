#include <stdio.h>
/**
 * main - prints the sum of all even fibonacci numbers under 4 million
 * Return: always 0
 */
int main(void)
{
	long int sum = 2;
	long int f[50];
	long int i;
	long int finalsum;

	f[0] = 1;
	f[1] = 2;

	i = 2;
	while (i < 33)
	{
		f[i] = f[i - 1] + f[i - 2];

		if (f[i] < 4000000 && f[i] % 2 == 0)
		{
			sum  = sum + f[i];
		}

		finalsum = sum;

		i++;
	}
	printf("%ld\n", finalsum);
	return (0);
}


