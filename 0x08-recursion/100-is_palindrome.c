#include "main.h"
/**
 * getlength - gets last index of a string
 * @s: string to measure
 * @m: starting index
 *
 * Return: last index of string
 */
int getlastindex(char *s, int m)
{
	int length;
	
	if(s[m])
	{
		length = getlastindex(s, m + 1);
		return (length);
	}
	else
	{
		return (m - 1);
	}
}

/**
 * checker - compares characters in a string
 * @s: string to be used
 * @forward: index to the first character
 * @backward: index to the last character
 *
 * Return: 0 if letters are not equal,  1 if all letters are compared and equal
 */
int checker(char *s, int forward, int backward)
{
	if (s[forward] != s[backward])
	{
		return (0);
	}
	if (forward >= backward && s[forward] == s[backward])
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
	int result;
	int i = 0;
	
	result = getlastindex(s, i);

	return (checker(s, i, result));
}

