#include "main.h"
/**
 * _islower -determines if a letter is lowercase
 * Return: 1 (success) , 0 (not lowercase)
 * @c: letter to be checked
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
