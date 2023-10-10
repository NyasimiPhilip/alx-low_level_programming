#include "search_algos.h"
/**
 * binary_search - Searches for a value in an array
 * of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, middle_index, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		middle_index = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[middle_index] == value)
			return (middle_index);
		else if (array[middle_index] > value)
			high = middle_index - 1;
		else
			low = middle_index + 1;
	}
	return (-1);
}
