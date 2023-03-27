#include <stdio.h>

/**
  * swap_int - swaps the values of two integers.
  *@a: The first integer to be swapped
 * @b: The second interger to be swapped
  *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two intergers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
