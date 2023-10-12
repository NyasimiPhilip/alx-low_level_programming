#include "search_algos.h"
/**
 * binary_recursion - Binary search using recursion
 * @array: Pointer to the array to search
 * @value: The value to search for
 * @low: The lowest index of the search range
 * @high: The highest index of the search range
 *
 * Return: Index of the 'value' in 'array' if found, or -1 if not found
 */
int binary_recursion(int *array, int value, int low, int high)
{
	int middle, i;

	if (high < low)
		return (-1);
	/* Display the current search range */
	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[high]);
	middle = low + (high - low) / 2;
	if (array[middle] == value && (middle == low || array[middle - 1] != value))
		return (middle);
	if (array[middle] >= value)
		return (binary_recursion(array, value, low, middle));
	else
		return (binary_recursion(array, value, middle + 1, high));
}
/**
 * advanced_binary - Searches for a value in a sorted array
 * of integers using advanced binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located.
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (binary_recursion(array, value, low, high));
}
