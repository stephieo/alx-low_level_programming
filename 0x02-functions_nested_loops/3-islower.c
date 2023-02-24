#include "main.h"
/**
 * _islower - checks if a letter is lowercase
 *
 * @c: letter to be verified
 *
 * Return: 1 (success), 0 (uppercase)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
