
/**
 * _isalpha - checks if a character is uppercase
 * @c: character to be evaluated
 * Return: 1 (uppercase) , 0 (not uppercaser)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

