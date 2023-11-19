/**
 * hash_djb2 - Generates a unique hash value using a custom algorithm.
 * @str: The string used to generate the hash value
 * Return: The unique hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
