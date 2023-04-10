#include "main.h"
#include <stdio.h>

/**
  * _isdigit -  checks whether a given character is a decimal digit or not.
  * @c: character to be checked
  * Return: return 1 if the character is decimal digit 0 if not
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
