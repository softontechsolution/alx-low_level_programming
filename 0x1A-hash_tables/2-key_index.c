#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @k: key
 * @s: size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *k, unsigned long int s)
{
	unsigned long int index = hash_djb2(k) % s;

	return (index);
}
