#include <stdio.h>
#include <stdlib.h>
/**
 * divider - divides change into coin denominations
 * @amt: amount of change to be divided
 *
 * Return: number of coins
 */
int divider(int amt)
{
	int coins = 0;


	if (amt / 25)
	{
		coins += (amt / 25);
		amt %= 25;
	}

	if (amt / 10)
	{
		coins += amt / 10;
		amt %= 10;
	}

	if (amt / 5)
	{
		coins += amt / 5;
		amt %= 5;
	}

	if (amt / 2)
	{
		coins += amt / 2;
		amt %= 2;
	}

	if (amt / 1)
	{
		coins += amt / 1;
		amt %= 1;
	}
	return (coins);
}

/**
 * main - returns number of coins required to make change
 * @argc: no of arguments
 * @argv: array of arguments
 *
 * Return: number of coins
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	int rem;
	int num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	rem = atoi(argv[1]);

	if (rem < 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	num_coins = divider(rem);
	printf("%d\n", num_coins);

	return (num_coins);

}

