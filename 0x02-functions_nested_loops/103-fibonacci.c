#include <stdio.h>
/**
 * main - prints the sum of all even fibonacci numbers under 4 million
 * Return: always 0
 */
int main(void)
{
	long int sum = 0;
	long int f[50];
	long int i;

	f[0] = 1;
	f[1] = 2;

	for (i = 2; f[i] < 4000000; i++)
	{
		f[i] = f[i + i] + f[i - 2];
		if (f[i] % 2 == 0)
		{
			sum  = sum + f[i];
		}
	}
	printf("%ld\n", sum);
	return (0);
}


