#include "search_algos.h"
/**
 * interpolation_search - search for el using interpolation search
 * @array: array passed
 * @size: array size
 * @value: value to be checked
 * Return: index of value if found, else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;
	int probe;

	if (!array)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high]
						- array[low])) * (value - array[low]));
		probe = pos;

		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", probe);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
			return (probe);
		else if (array[probe] > value)
		{
			high = probe - 1;
			continue;
		}
		else
		{
			low = probe + 1;
			continue;
		}
	}
	return (-1);
}
