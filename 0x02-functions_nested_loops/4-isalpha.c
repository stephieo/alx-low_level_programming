#include "main.h"
/**
 * _isalpha - checks if a  character is an alphbet
 *
 * @c: character to be checked
 *
 * Return: 1 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
