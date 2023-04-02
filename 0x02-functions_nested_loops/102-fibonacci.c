#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: always 0 (success)
 */
int main(void)
{
	long int f[50];

	int i;

	f[0] = 1;
	f[1] = 2;
	printf("%ld, ", f[0]);
	printf("%ld, ", f[1]);
	i = 2;
	while (i < 50)
	{
		f[i] = f[i - 1] + f[i - 2];
		if (i == 49)
		{
			printf("%ld", f[i]);
		}
		else
		{
			printf("%ld, ", f[i]);
		}
		i++;
	}
	printf("\n");
	return (0);
}
