#include "search_algos.h"
/**
 * binary_recursion - binary search using recursion
 * @array: array passed
 * @low: lower bound
 * @high: upper bound
 * @value: value to be checked
 * Return: index of value if found, else -1
 */
int binary_recursion(int *array, int value, int low, int high)
{
	int middle_index = (low + high) / 2, index, i;

	if (!array || (low > high))
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i + 1 != high + 1)
			printf(", ");
	}
	printf("\n");
	if (array[middle_index] == value)
	{
		/*check if value is at the 0th index*/
		if ((middle_index - 1) < 0)
			return (middle_index);
		/*if el on left != target value*/
		if (array[middle_index - 1] != value)
			return (middle_index);
		/*el on left is also == target*/
		else
		{
			index = binary_recursion(array, value, low, middle_index - 1);
			return (index);
		}
	}
	else if (array[middle_index] > value)
		index = binary_recursion(array, value, low, middle_index - 1);
	else
		index = binary_recursion(array, value, middle_index + 1, high);
	return (index);
}
/**
 * exponential_search - func to search for el using expo search algo
 * @array: array
 * @size: array size
 * @value: value to search
 * Return: index of value if found, else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int low, high; /*to be used for binary search*/
	int power = 2, i = 1;
	int value_index, array_size = size;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < array_size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= power;
	}
	/*perform binary search*/
	low = i / 2;
	high = (i < array_size) ? i : array_size - 1;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	value_index = binary_recursion(array, value, low, high);
	return (value_index);
}
