#include "main.h"
#include <stdio.h>

/**
  * _isalpha - checks whether a character is an alphabet or not
  * @c: character to be checked
  * Return: non zero if the character is alphabet
 *  or 0  if the character is not alphabet
*/

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{


	return (0);
	}
}
