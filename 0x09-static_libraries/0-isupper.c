#include "main.h"
#include <stdio.h>

/**
  * _isupper -  checks whether a given character is
  * an uppercase letter or not.
  * @c: character to be checked
  * Return: Return 1 if the character is an uppercase, if not 0
  */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
