#include "main.h"
#include <stdio.h>

/**
  * _strlen - calculates the length of a string.
  * @s: the string whose length to be calculated.
  * Return:  returns an integer value, which is the length of the string
  * excluding the null terminator
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
	length++;
		 s++;
	}

	{
	return (length);
	}
}
