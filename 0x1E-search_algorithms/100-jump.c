#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *	using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int jump;
        int left;
        int right;
        int i;

        jump = sqrt(size);
        left = 0;
        right = 0;


	if (array == NULL)
	{
	return (-1);
	}

	
	while (right < (int)size && array[right] < value)
	{
	printf("Value checked array[%d] = [%d]\n", right, array[right]);
	left = right;
	right += jump;
	}

	right = (right < (int)size) ? right :(int) size;

	for (i = left; i < right; i++)
	{
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
	return (i);
	}
	}

	return (-1);
}

