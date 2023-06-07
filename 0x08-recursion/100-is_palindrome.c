#include "main.h"
/**
 * checker - compares characters in a string
 * @s: string to be used
 * @forward: index to the first character
 * @backward: index to the last character
 *
 * Return: 0 if letters are not equal,  1 if all letters are compared and equal
 */
int checker (char *s, int forward, int backward)
{
	if (s[forward] != s[backward])
	{
		return (0);
	}
	if ( forward >= backward && s[forward] ==s[backward])
	{
		return (1);
	}
	else
	{
		return (checker(s, forward + 1, backward - 1));
	}
}
	
/**
 * is_palindrome -  checks if a string is a palindrome
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	for ( i = 0; s[i] != '\0'; i++)
	{
		;
	}

	
	return (checker (s, i - i, i -1));
}

