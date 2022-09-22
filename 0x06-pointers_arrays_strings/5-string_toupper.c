#include "main.h

/**
 * string_touper - changes all lowercases letters of a string to uppercase
 * @str: parameter
 * Return: return a character
 * /

char *string_touper( char *str)
{
	int index = 0;

	while  (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
