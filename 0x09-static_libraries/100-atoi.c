 #include "main.h"
/**
 * _atoi - changes a string to an integer
 * @s:  string to convert
 * Return: the resulting integer
 */
int _atoi(char *str)
{
	int num = 0, s = 1, i, retval;
	

	for (i = 0; str[i] !='\0'; i++)
	{
		s *= (str[i] == '-') ? -1 : 1 ;

		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10  + (str[i] - 48);
		}
	}
	retval = s * num;
	return (retval);
}

