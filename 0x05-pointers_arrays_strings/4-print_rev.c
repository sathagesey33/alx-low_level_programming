#include "main.h"
#include <stdio.h>

/**
  * print_rev - prints a string in reverse
  *@s: The string to print
  *Return: void
  */

void print_rev(char *s)

{

	int c = 0;

	while (s[c] != '\0')
	{

	c++;
	}

	for (c -= !; c >= 0; c--)

	{

	_puchar(s[c]);

	}

	_putchar('\n');

}
