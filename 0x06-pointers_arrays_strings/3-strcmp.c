#include "main.h"

/**
  * _strcmp - compares pointers to two string
  * @s1: A  pointer to the first string to be compared
  * @s2: A pointer to the second string to be compared
  * Return: if str1 < str2, the negative defference of the first
  * unmatched characters.
  * if str1 == str2, 0.
  * if str1 > str2, the positive defference of the first unmatched characters.
  */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;

	}

	return (*s1 - *s2);

}

